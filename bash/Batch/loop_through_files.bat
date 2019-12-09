@ECHO OFF

echo "[!] Beginning Script [!]"

FOR %%a in (alsothis.bat findthis.txt) DO (
    IF EXIST %%a (echo "[+] File %aa Found [+]") ELSE (echo "[-] File %aa Not Found [-]")
)