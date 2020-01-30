library(RCurl)

require(RCURL)

priv_key_path = 'C:/Users/chris/OneDrive/Documents/Defense_Site_1'
amazon_ec2_dns = 'ec2-18-218-109-234.us-east-2.compute.amazonaws.com'

ftpUpload(what = 'app.R', 
          to = paste('sftp://ec2-user@', amazon_ec2_dns, ':22', sep = ''),
          verbose = TRUE,
          .opts = list(ssh.private.keyfile = priv_key_path)
          )