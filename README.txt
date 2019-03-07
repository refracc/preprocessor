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
    ██║            2. "nmake [math|math_c|string|string_c]" [i|j|k|l] where i,j,k or l are optional.
    ██║                2.1. [math|string] will execute preprocess.exe fully while removing comments.
    ██║                2.2. [math_c|string_c] will execute preprocess.exe fully while keeping comments.
    ╚═╝
    ██╗                  ███╗   ██╗██╗██╗  ██╗
    ██║            ▄ ██╗▄████╗  ██║██║╚██╗██╔╝
    ██║             ████╗██╔██╗ ██║██║ ╚███╔╝
    ██║            ▀╚██╔▀██║╚██╗██║██║ ██╔██╗
    ██║███████╗      ╚═╝ ██║ ╚████║██║██╔╝ ██╗
    ╚═╝╚══════╝          ╚═╝  ╚═══╝╚═╝╚═╝  ╚═╝
    ██╗		   To execute this code on any *nix-based system, you first need to open your Command Line/Terminal/
    ██║            NB: It will start off in your home directory: "~"
    ██║		   1. "cd <folder path>" to get to your directory
    ██║            2. "gcc -o <file> preprocess" This will compile the program.
    ██║		   3. "./preprocess -i <file>" will execute the software to run on that particular file.
    ██║	           3.1 "./preprocess -i <file> -c" will execute the software to run on that particular file while keeping all comments in the file.
    ╚═╝