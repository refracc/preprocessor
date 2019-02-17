██╗███╗   ██╗████████╗██████╗  ██████╗ ██████╗ ██╗   ██╗ ██████╗████████╗██╗ ██████╗ ███╗   ██╗
██║████╗  ██║╚══██╔══╝██╔══██╗██╔═══██╗██╔══██╗██║   ██║██╔════╝╚══██╔══╝██║██╔═══██╗████╗  ██║
██║██╔██╗ ██║   ██║   ██████╔╝██║   ██║██║  ██║██║   ██║██║        ██║   ██║██║   ██║██╔██╗ ██║
██║██║╚██╗██║   ██║   ██╔══██╗██║   ██║██║  ██║██║   ██║██║        ██║   ██║██║   ██║██║╚██╗██║
██║██║ ╚████║   ██║   ██║  ██║╚██████╔╝██████╔╝╚██████╔╝╚██████╗   ██║   ██║╚██████╔╝██║ ╚████║
╚═╝╚═╝  ╚═══╝   ╚═╝   ╚═╝  ╚═╝ ╚═════╝ ╚═════╝  ╚═════╝  ╚═════╝   ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝
                                                                                               

This program is used to simulate a C pre-processor which can also be used for JavaScript and other C-like languages
(except you, Java, no one likes you). It works by passing in a file through the command line and you will receive a count of the
non-empty lines and however many lines that do contain comments (both in-line and standard). It will then proceed to give you a
<name>.o file - which is essentially your output file. 


 ██████╗ ██████╗ ██████╗ ███████╗       ███████╗██╗  ██╗███████╗ ██████╗██╗   ██╗████████╗██╗ ██████╗ ███╗   ██╗
██╔════╝██╔═══██╗██╔══██╗██╔════╝       ██╔════╝╚██╗██╔╝██╔════╝██╔════╝██║   ██║╚══██╔══╝██║██╔═══██╗████╗  ██║
██║     ██║   ██║██║  ██║█████╗         █████╗   ╚███╔╝ █████╗  ██║     ██║   ██║   ██║   ██║██║   ██║██╔██╗ ██║
██║     ██║   ██║██║  ██║██╔══╝         ██╔══╝   ██╔██╗ ██╔══╝  ██║     ██║   ██║   ██║   ██║██║   ██║██║╚██╗██║
╚██████╗╚██████╔╝██████╔╝███████╗       ███████╗██╔╝ ██╗███████╗╚██████╗╚██████╔╝   ██║   ██║╚██████╔╝██║ ╚████║
 ╚═════╝ ╚═════╝ ╚═════╝ ╚══════╝       ╚══════╝╚═╝  ╚═╝╚══════╝ ╚═════╝ ╚═════╝    ╚═╝   ╚═╝ ╚═════╝ ╚═╝  ╚═══╝
    ██╗            ██╗    ██╗██╗███╗   ██╗██████╗  ██████╗ ██╗    ██╗███████╗
    ██║            ██║    ██║██║████╗  ██║██╔══██╗██╔═══██╗██║    ██║██╔════╝
    ██║            ██║ █╗ ██║██║██╔██╗ ██║██║  ██║██║   ██║██║ █╗ ██║███████╗
    ██║            ██║███╗██║██║██║╚██╗██║██║  ██║██║   ██║██║███╗██║╚════██║
    ██║███████╗    ╚███╔███╔╝██║██║ ╚████║██████╔╝╚██████╔╝╚███╔███╔╝███████║
    ╚═╝╚══════╝     ╚══╝╚══╝ ╚═╝╚═╝  ╚═══╝╚═════╝  ╚═════╝  ╚══╝╚══╝ ╚══════╝
    ██╗		   To execute this code on Windows, you first need to open your Visual Studio Command Line
    ██║            NB: It will start off somewhere like this: "C:\Program Files (x86)\Microsoft Visual Studio\2017\Enterprise>"
    ██║		   1. "cd <folder path>" to get to your directory
    ██║		   2. "nmake [preprocess|ppc]" [x|y] where x and y are optional. You may use either or and get the same result
    ██║            3. "preprocess <file>"
    ╚═╝ 