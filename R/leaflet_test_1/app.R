library(shiny)
library(leaflet)

icon_path = 'C:/Users/chris/OneDrive/ProgrammingPractice/Maki/mapbox-maki-a6d16d4/icons/'

danger = makeIcon(paste(icon_path, 'danger-11.svg', sep = ''), paste(icon_path, 'danger-15.svg', sep = ''), 11, 11)  
comm_tower = makeIcon(paste(icon_path, 'communications-tower-11.svg', sep = ''), paste(icon_path, 'communications-tower-15.svg', sep = ''), 11, 11)

r_colors <- rgb(t(col2rgb(colors()) / 255))
names(r_colors) <- colors()

ui <- fluidPage(
  leafletOutput("mymap"),
  p(),
  actionButton("recalc", "New points")
)

server <- function(input, output, session) {
  
  points <- eventReactive(input$recalc, {
    cbind(rnorm(40) * 2 + 13, rnorm(40) + 48)
  }, ignoreNULL = FALSE)
  
  output$mymap <- renderLeaflet({
    leaflet() %>%
      addProviderTiles(providers$Stamen.TonerLite,
                       options = providerTileOptions(noWrap = TRUE)
      ) %>%
      addMarkers(data = points(),
                 icon = comm_tower)
  })
}

shinyApp(ui, server)