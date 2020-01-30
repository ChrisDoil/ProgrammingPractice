param (
    [Parameter(Mandatory = $true)][string]$file_name
)

$port = 22
$key_file = 'C:\Users\chris\OneDrive\Documents\Defense_Site_1\kali-unl.pem'
$local_folder = 'C:\Users\chris\OneDrive\ProgrammingPractice\R\'
$com_name = 'ec2-18-218-109-234.us-east-2.compute.amazonaws.com'




Set-SCPFile -ComputerName $com_name -Port $port -KeyFile $key_file -LocalFile ($local_folder + $file_name) -RemotePath '/srv/shiny-server/'

