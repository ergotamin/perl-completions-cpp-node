/* @{ */
static std::vector<std::array<std::string,3> > functions = {
{ "chomp", " chomp VARIABLE \n chomp( LIST ) \n chomp \n", " remove a trailing record separator from a string \n" }, \
{ "chop", " chop VARIABLE \n chop( LIST ) \n chop \n", " remove the last character from a string \n" }, \
{ "chr", " chr NUMBER \n chr \n", " get character this number represents \n" }, \
{ "crypt", " crypt PLAINTEXT,SALT \n", " one-way passwd-style encryption \n" }, \
{ "fc", " fc EXPR \n fc \n", " +fc return casefolded version of a string \n" }, \
{ "hex", " hex EXPR \n hex \n", " convert a hexadecimal string to a number \n" }, \
{ "index", " index STR,SUBSTR,POSITION \n index STR,SUBSTR \n", " find a substring within a string \n" }, \
{ "lc", " lc EXPR \n lc \n If use bytes is in effect: \n Otherwise, if use locale for LC_CTYPE is in effect: \n Otherwise, If EXPR has the UTF8 flag set: \n Otherwise, if use feature 'unicode_strings' or use locale ':not_characters' is in effect: \n Otherwise: \n", " return lower-case version of a string \n" }, \
{ "lcfirst", " lcfirst EXPR \n lcfirst \n", " return a string with just the next letter in lower case \n" }, \
{ "length", " length EXPR \n length \n", " return the number of characters in a string \n" }, \
{ "oct", " oct EXPR \n oct \n", " convert a string to an octal number \n" }, \
{ "ord", " ord EXPR \n ord \n", " find a character's numeric representation \n" }, \
{ "pack", " pack TEMPLATE,LIST \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n", " convert a list into a binary representation \n" }, \
{ "reverse", " reverse LIST \n", " flip a string or a list \n" }, \
{ "rindex", " rindex STR,SUBSTR,POSITION \n rindex STR,SUBSTR \n", " right-to-left substring search \n" }, \
{ "sprintf", " sprintf FORMAT, LIST \n format parameter index \n flags \n vector flag \n (minimum) width \n precision, or maximum width \n size \n order of arguments \n", " formatted print into a string \n" }, \
{ "substr", " substr EXPR,OFFSET,LENGTH,REPLACEMENT \n substr EXPR,OFFSET,LENGTH \n substr EXPR,OFFSET \n", " get or alter a portion of a string \n" }, \
{ "uc", " uc EXPR \n uc \n", " return upper-case version of a string \n" }, \
{ "ucfirst", " ucfirst EXPR \n ucfirst \n", " return a string with just the next letter in upper case \n" }, \
{ "pos", " pos SCALAR \n pos \n", " find or set the offset for the last/next m//g search \n" }, \
{ "quotemeta", " quotemeta EXPR \n quotemeta \n", " quote regular expression magic characters \n" }, \
{ "split", " split /PATTERN/,EXPR,LIMIT \n split /PATTERN/,EXPR \n split /PATTERN/ \n split \n", " split up a string using a regexp delimiter \n" }, \
{ "study", " study SCALAR \n study \n", " no-op, formerly optimized input data for repeated searches \n" }, \
{ "abs", " abs VALUE \n abs \n", " absolute value function \n" }, \
{ "atan2", " atan2 Y,X \n", " arctangent of Y/X in the range -PI to PI \n" }, \
{ "cos", " cos EXPR \n cos \n", " cosine function \n" }, \
{ "exp", " exp EXPR \n exp \n", " raise I<e> to a power \n" }, \
{ "hex", " hex EXPR \n hex \n", " convert a hexadecimal string to a number \n" }, \
{ "int", " int EXPR \n int \n", " get the integer portion of a number \n" }, \
{ "log", " log EXPR \n log \n", " retrieve the natural logarithm for a number \n" }, \
{ "oct", " oct EXPR \n oct \n", " convert a string to an octal number \n" }, \
{ "rand", " rand EXPR \n rand \n", " retrieve the next pseudorandom number \n" }, \
{ "sin", " sin EXPR \n sin \n", " return the sine of a number \n" }, \
{ "sqrt", " sqrt EXPR \n sqrt \n", " square root function \n" }, \
{ "srand", " srand EXPR \n srand \n", " seed the random number generator \n" }, \
{ "each", " each HASH \n each ARRAY \n", " retrieve the next key/value pair from a hash \n" }, \
{ "keys", " keys HASH \n keys ARRAY \n", " retrieve list of indices from a hash \n" }, \
{ "pop", " pop ARRAY \n pop \n", " remove the last element from an array and return it \n" }, \
{ "push", " push ARRAY,LIST \n", " append one or more elements to an array \n" }, \
{ "shift", " shift ARRAY \n shift \n", " remove the first element of an array, and return it \n" }, \
{ "splice", " splice ARRAY,OFFSET,LENGTH,LIST \n splice ARRAY,OFFSET,LENGTH \n splice ARRAY,OFFSET \n splice ARRAY \n", " add or remove elements anywhere in an array \n" }, \
{ "unshift", " unshift ARRAY,LIST \n", " prepend more elements to the beginning of a list \n" }, \
{ "values", " values HASH \n values ARRAY \n", " return a list of the values in a hash \n" }, \
{ "grep", " grep BLOCK LIST \n grep EXPR,LIST \n", " locate elements in a list test true against a given criterion \n" }, \
{ "join", " join EXPR,LIST \n", " join a list into a string using a separator \n" }, \
{ "map", " map BLOCK LIST \n map EXPR,LIST \n", " apply a change to a list to get back a new list with the changes \n" }, \
{ "reverse", " reverse LIST \n", " flip a string or a list \n" }, \
{ "sort", " sort SUBNAME LIST \n sort BLOCK LIST \n sort LIST \n", " sort a list of values \n" }, \
{ "unpack", " unpack TEMPLATE,EXPR \n unpack TEMPLATE \n", " convert binary structure into normal perl variables \n" }, \
{ "delete", " delete EXPR \n", " deletes a value from a hash \n" }, \
{ "each", " each HASH \n each ARRAY \n", " retrieve the next key/value pair from a hash \n" }, \
{ "exists", " exists EXPR \n", " test whether a hash key is present \n" }, \
{ "keys", " keys HASH \n keys ARRAY \n", " retrieve list of indices from a hash \n" }, \
{ "values", " values HASH \n values ARRAY \n", " return a list of the values in a hash \n" }, \
{ "binmode", " binmode FILEHANDLE, LAYER \n binmode FILEHANDLE \n", " prepare binary files for I/O \n" }, \
{ "close", " close FILEHANDLE \n close \n", " close file (or pipe or socket) handle \n" }, \
{ "closedir", " closedir DIRHANDLE \n", " close directory handle \n" }, \
{ "dbmclose", " dbmclose HASH \n", " breaks binding on a tied dbm file \n" }, \
{ "dbmopen", " dbmopen HASH,DBNAME,MASK \n", " create binding on a tied dbm file \n" }, \
{ "die", " die LIST \n", " raise an exception or bail out \n" }, \
{ "eof", " eof FILEHANDLE \n eof () \n eof \n", " test a filehandle for its end \n" }, \
{ "fileno", " fileno FILEHANDLE \n fileno DIRHANDLE \n", " return file descriptor from filehandle \n" }, \
{ "flock", " flock FILEHANDLE,OPERATION \n", " lock an entire file with an advisory lock \n" }, \
{ "format", " format \n", " declare a picture format with use by the write() function \n" }, \
{ "getc", " getc FILEHANDLE \n getc \n", " get the next character from the filehandle \n" }, \
{ "print", " print FILEHANDLE LIST \n print FILEHANDLE \n print LIST \n print \n", " output a list to a filehandle \n" }, \
{ "printf", " printf FILEHANDLE FORMAT, LIST \n printf FILEHANDLE \n printf FORMAT, LIST \n printf \n", " output a formatted list to a filehandle \n" }, \
{ "read", " read FILEHANDLE,SCALAR,LENGTH,OFFSET \n read FILEHANDLE,SCALAR,LENGTH \n", " fixed-length buffered input from a filehandle \n" }, \
{ "readdir", " readdir DIRHANDLE \n", " get a directory from a directory handle \n" }, \
{ "readline", " readline EXPR \n readline \n", " fetch a record from a file \n" }, \
{ "rewinddir", " rewinddir DIRHANDLE \n", " reset directory handle \n" }, \
{ "say", " say FILEHANDLE LIST \n say FILEHANDLE \n say LIST \n say \n", " +say output a list to a filehandle, appending a newline \n" }, \
{ "seek", " seek FILEHANDLE,POSITION,WHENCE \n", " reposition file pointer for random-access I/O \n" }, \
{ "seekdir", " seekdir DIRHANDLE,POS \n", " reposition directory pointer \n" }, \
{ "select", " select FILEHANDLE \n select \n select RBITS,WBITS,EBITS,TIMEOUT \n", " reset default output or do I/O multiplexing \n" }, \
{ "syscall", " syscall NUMBER, LIST \n", " execute an arbitrary system call \n" }, \
{ "sysread", " sysread FILEHANDLE,SCALAR,LENGTH,OFFSET \n sysread FILEHANDLE,SCALAR,LENGTH \n", " fixed-length unbuffered input from a filehandle \n" }, \
{ "sysseek", " sysseek FILEHANDLE,POSITION,WHENCE \n", " +5.004 position I/O pointer on handle used with sysread and syswrite \n" }, \
{ "syswrite", " syswrite FILEHANDLE,SCALAR,LENGTH,OFFSET \n syswrite FILEHANDLE,SCALAR,LENGTH \n syswrite FILEHANDLE,SCALAR \n", " fixed-length unbuffered output to a filehandle \n" }, \
{ "tell", " tell FILEHANDLE \n tell \n", " get current seekpointer on a filehandle \n" }, \
{ "telldir", " telldir DIRHANDLE \n", " get current seekpointer on a directory handle \n" }, \
{ "truncate", " truncate FILEHANDLE,LENGTH \n truncate EXPR,LENGTH \n", " shorten a file \n" }, \
{ "warn", " warn LIST \n", " print debugging info \n" }, \
{ "write", " write FILEHANDLE \n write EXPR \n write \n", " print a picture record \n" }, \
{ "pack", " pack TEMPLATE,LIST \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n * \n", " convert a list into a binary representation \n" }, \
{ "read", " read FILEHANDLE,SCALAR,LENGTH,OFFSET \n read FILEHANDLE,SCALAR,LENGTH \n", " fixed-length buffered input from a filehandle \n" }, \
{ "syscall", " syscall NUMBER, LIST \n", " execute an arbitrary system call \n" }, \
{ "sysread", " sysread FILEHANDLE,SCALAR,LENGTH,OFFSET \n sysread FILEHANDLE,SCALAR,LENGTH \n", " fixed-length unbuffered input from a filehandle \n" }, \
{ "sysseek", " sysseek FILEHANDLE,POSITION,WHENCE \n", " +5.004 position I/O pointer on handle used with sysread and syswrite \n" }, \
{ "syswrite", " syswrite FILEHANDLE,SCALAR,LENGTH,OFFSET \n syswrite FILEHANDLE,SCALAR,LENGTH \n syswrite FILEHANDLE,SCALAR \n", " fixed-length unbuffered output to a filehandle \n" }, \
{ "unpack", " unpack TEMPLATE,EXPR \n unpack TEMPLATE \n", " convert binary structure into normal perl variables \n" }, \
{ "vec", " vec EXPR,OFFSET,BITS \n", " test or set particular bits in a string \n" }, \
{ "-X", " -X FILEHANDLE \n -X EXPR \n -X DIRHANDLE \n -X \n", " a file test (-r, -x, etc) \n" }, \
{ "chdir", " chdir EXPR \n chdir FILEHANDLE \n chdir DIRHANDLE \n chdir \n", " change your current working directory \n" }, \
{ "chmod", " chmod LIST \n", " changes the permissions on a list of files \n" }, \
{ "chown", " chown LIST \n", " change the ownership on a list of files \n" }, \
{ "chroot", " chroot FILENAME \n chroot \n", " make directory new root for path lookups \n" }, \
{ "fcntl", " fcntl FILEHANDLE,FUNCTION,SCALAR \n", " file control system call \n" }, \
{ "glob", " glob EXPR \n glob \n", " expand filenames using wildcards \n" }, \
{ "ioctl", " ioctl FILEHANDLE,FUNCTION,SCALAR \n", " system-dependent device control system call \n" }, \
{ "link", " link OLDFILE,NEWFILE \n", " create a hard link in the filesystem \n" }, \
{ "lstat", " lstat FILEHANDLE \n lstat EXPR \n lstat DIRHANDLE \n lstat \n", " stat a symbolic link \n" }, \
{ "mkdir", " mkdir FILENAME,MODE \n mkdir FILENAME \n mkdir \n", " create a directory \n" }, \
{ "open", " open FILEHANDLE,EXPR \n open FILEHANDLE,MODE,EXPR \n open FILEHANDLE,MODE,EXPR,LIST \n open FILEHANDLE,MODE,REFERENCE \n open FILEHANDLE \n", " open a file, pipe, or descriptor \n" }, \
{ "opendir", " opendir DIRHANDLE,EXPR \n", " open a directory \n" }, \
{ "readlink", " readlink EXPR \n readlink \n", " determine where a symbolic link is pointing \n" }, \
{ "rename", " rename OLDNAME,NEWNAME \n", " change a filename \n" }, \
{ "rmdir", " rmdir FILENAME \n rmdir \n", " remove a directory \n" }, \
{ "select", " select FILEHANDLE \n select \n select RBITS,WBITS,EBITS,TIMEOUT \n", " reset default output or do I/O multiplexing \n" }, \
{ "stat", " stat FILEHANDLE \n stat EXPR \n stat DIRHANDLE \n stat \n", " get a file's status information \n" }, \
{ "symlink", " symlink OLDFILE,NEWFILE \n", " create a symbolic link to a file \n" }, \
{ "sysopen", " sysopen FILEHANDLE,FILENAME,MODE \n sysopen FILEHANDLE,FILENAME,MODE,PERMS \n", " +5.002 open a file, pipe, or descriptor \n" }, \
{ "umask", " umask EXPR \n umask \n", " set file creation mode mask \n" }, \
{ "unlink", " unlink LIST \n unlink \n", " remove one link to a file \n" }, \
{ "utime", " utime LIST \n", " set a file's last access and modify times \n" }, \
{ "break", " break \n", " +switch break out of a C<given> block \n" }, \
{ "caller", " caller EXPR \n caller \n", " get context of the current subroutine call \n" }, \
{ "continue", " continue BLOCK \n continue \n", " optional trailing block in a while or foreach \n" }, \
{ "die", " die LIST \n", " raise an exception or bail out \n" }, \
{ "do", " do BLOCK \n do EXPR \n", " turn a BLOCK into a TERM \n" }, \
{ "dump", " dump LABEL \n dump EXPR \n dump \n", " create an immediate core dump \n" }, \
{ "eval", " eval EXPR \n eval BLOCK \n eval \n String eval \n Under the L<\"unicode_eval\" feature|feature/The 'unicode_eval' and 'evalbytes' features \n Outside the \"unicode_eval\" feature \n * \n * \n Block eval \n", " catch exceptions or compile and run code \n" }, \
{ "evalbytes", " evalbytes EXPR \n evalbytes \n", " +evalbytes similar to string eval, but intend to parse a bytestream \n" }, \
{ "exit", " exit EXPR \n exit \n", " terminate this program \n" }, \
{ "goto", " goto LABEL \n goto EXPR \n goto &NAME \n", " create spaghetti code \n" }, \
{ "last", " last LABEL \n last EXPR \n last \n", " exit a block prematurely \n" }, \
{ "next", " next LABEL \n next EXPR \n next \n", " iterate a block prematurely \n" }, \
{ "redo", " redo LABEL \n redo EXPR \n redo \n", " start this loop iteration over again \n" }, \
{ "return", " return EXPR \n return \n", " get out of a function early \n" }, \
{ "sub", " sub NAME BLOCK \n sub NAME (PROTO) BLOCK \n sub NAME : ATTRS BLOCK \n sub NAME (PROTO) : ATTRS BLOCK \n", " declare a subroutine, possibly anonymously \n" }, \
{ "wantarray", " wantarray \n", " get void vs scalar vs list context of current subroutine call \n" }, \
{ "caller", " caller EXPR \n caller \n", " get context of the current subroutine call \n" }, \
{ "import", " import LIST \n", " patch a module's namespace into your own \n" }, \
{ "local", " local EXPR \n", " create a temporary value for a global variable (dynamic scoping) \n" }, \
{ "my", " my VARLIST \n my TYPE VARLIST \n my VARLIST : ATTRS \n my TYPE VARLIST : ATTRS \n", " declare and assign a local variable (lexical scoping) \n" }, \
{ "our", " our VARLIST \n our TYPE VARLIST \n our VARLIST : ATTRS \n our TYPE VARLIST : ATTRS \n", " +5.6.0 declare and assign a package variable (lexical scoping) \n" }, \
{ "package", " package NAMESPACE \n package NAMESPACE VERSION \n package NAMESPACE BLOCK \n package NAMESPACE VERSION BLOCK \n", " declare a separate global namespace \n" }, \
{ "state", " state VARLIST \n state TYPE VARLIST \n state VARLIST : ATTRS \n state TYPE VARLIST : ATTRS \n", " +state declare and assign a persistent lexical variable \n" }, \
{ "use", " use Module VERSION LIST \n use Module VERSION \n use Module LIST \n use Module \n use VERSION \n", " load in a module at compile time and import its namespace \n" }, \
{ "defined", " defined EXPR \n defined \n", " test whether a value, variable, or function is defined \n" }, \
{ "formline", " formline PICTURE,LIST \n", " internal function used for formats \n" }, \
{ "lock", " lock THING \n", " +5.005 get a thread lock on a variable, subroutine, or method \n" }, \
{ "prototype", " prototype FUNCTION \n prototype \n", " +5.002 get the prototype (if any) of a subroutine \n" }, \
{ "reset", " reset EXPR \n reset \n", " clear all variables of a given name \n" }, \
{ "scalar", " scalar EXPR \n", " force a scalar context \n" }, \
{ "undef", " undef EXPR \n undef \n", " remove a variable or function definition \n" }, \
{ "alarm", " alarm SECONDS \n alarm \n", " schedule a SIGALRM \n" }, \
{ "exec", " exec LIST \n exec PROGRAM LIST \n", " abandon this program to run another \n" }, \
{ "fork", " fork \n", " create a new process just like this one \n" }, \
{ "getpgrp", " getpgrp PID \n", " get process group \n" }, \
{ "getppid", " getppid \n", " get parent process ID \n" }, \
{ "getpriority", " getpriority WHICH,WHO \n", " get current nice value \n" }, \
{ "kill", " kill SIGNAL, LIST \n kill SIGNAL \n", " send a signal to a process or process group \n" }, \
{ "pipe", " pipe READHANDLE,WRITEHANDLE \n", " open a pair of connected filehandles \n" }, \
{ "readpipe", " readpipe EXPR \n readpipe \n", " execute a system command and collect standard output \n" }, \
{ "setpgrp", " setpgrp PID,PGRP \n", " set the process group of a process \n" }, \
{ "setpriority", " setpriority WHICH,WHO,PRIORITY \n", " set a process's nice value \n" }, \
{ "sleep", " sleep EXPR \n sleep \n", " block for some number of seconds \n" }, \
{ "system", " system LIST \n system PROGRAM LIST \n", " run a separate program \n" }, \
{ "times", " times \n", " return elapsed time for self and child processes \n" }, \
{ "wait", " wait \n", " wait for any child process to die \n" }, \
{ "waitpid", " waitpid PID,FLAGS \n", " wait for a particular child process to die \n" }, \
{ "do", " do BLOCK \n do EXPR \n", " turn a BLOCK into a TERM \n" }, \
{ "import", " import LIST \n", " patch a module's namespace into your own \n" }, \
{ "no", " no MODULE VERSION LIST \n no MODULE VERSION \n no MODULE LIST \n no MODULE \n no VERSION \n", " unimport some module symbols or semantics at compile time \n" }, \
{ "package", " package NAMESPACE \n package NAMESPACE VERSION \n package NAMESPACE BLOCK \n package NAMESPACE VERSION BLOCK \n", " declare a separate global namespace \n" }, \
{ "require", " require VERSION \n require EXPR \n require \n 1 \n 2 \n 3 \n 4 \n", " load in external functions from a library at runtime \n" }, \
{ "use", " use Module VERSION LIST \n use Module VERSION \n use Module LIST \n use Module \n use VERSION \n", " load in a module at compile time and import its namespace \n" }, \
{ "bless", " bless REF,CLASSNAME \n bless REF \n", " create an object \n" }, \
{ "dbmclose", " dbmclose HASH \n", " breaks binding on a tied dbm file \n" }, \
{ "dbmopen", " dbmopen HASH,DBNAME,MASK \n", " create binding on a tied dbm file \n" }, \
{ "package", " package NAMESPACE \n package NAMESPACE VERSION \n package NAMESPACE BLOCK \n package NAMESPACE VERSION BLOCK \n", " declare a separate global namespace \n" }, \
{ "ref", " ref EXPR \n ref \n", " find out the type of thing being referenced \n" }, \
{ "tie", " tie VARIABLE,CLASSNAME,LIST \n", " +5.002 bind a variable to an object class \n" }, \
{ "tied", " tied VARIABLE \n", " get a reference to the object underlying a tied variable \n" }, \
{ "untie", " untie VARIABLE \n", " break a tie binding to a variable \n" }, \
{ "use", " use Module VERSION LIST \n use Module VERSION \n use Module LIST \n use Module \n use VERSION \n", " load in a module at compile time and import its namespace \n" }, \
{ "accept", " accept NEWSOCKET,GENERICSOCKET \n", " accept an incoming socket connect \n" }, \
{ "bind", " bind SOCKET,NAME \n", " binds an address to a socket \n" }, \
{ "connect", " connect SOCKET,NAME \n", " connect to a remote socket \n" }, \
{ "getpeername", " getpeername SOCKET \n", " find the other end of a socket connection \n" }, \
{ "getsockname", " getsockname SOCKET \n", " retrieve the sockaddr for a given socket \n" }, \
{ "getsockopt", " getsockopt SOCKET,LEVEL,OPTNAME \n", " get socket options on a given socket \n" }, \
{ "listen", " listen SOCKET,QUEUESIZE \n", " register your socket as a server \n" }, \
{ "recv", " recv SOCKET,SCALAR,LENGTH,FLAGS \n", " receive a message over a Socket \n" }, \
{ "send", " send SOCKET,MSG,FLAGS,TO \n send SOCKET,MSG,FLAGS \n", " send a message over a socket \n" }, \
{ "setsockopt", " setsockopt SOCKET,LEVEL,OPTNAME,OPTVAL \n", " set some socket options \n" }, \
{ "shutdown", " shutdown SOCKET,HOW \n", " close down just half of a socket connection \n" }, \
{ "socket", " socket SOCKET,DOMAIN,TYPE,PROTOCOL \n", " create a socket \n" }, \
{ "socketpair", " socketpair SOCKET1,SOCKET2,DOMAIN,TYPE,PROTOCOL \n", " create a pair of sockets \n" }, \
{ "msgctl", " msgctl ID,CMD,ARG \n", " SysV IPC message control operations \n" }, \
{ "msgget", " msgget KEY,FLAGS \n", " get SysV IPC message queue \n" }, \
{ "msgrcv", " msgrcv ID,VAR,SIZE,TYPE,FLAGS \n", " receive a SysV IPC message from a message queue \n" }, \
{ "msgsnd", " msgsnd ID,MSG,FLAGS \n", " send a SysV IPC message to a message queue \n" }, \
{ "semctl", " semctl ID,SEMNUM,CMD,ARG \n", " SysV semaphore control operations \n" }, \
{ "semget", " semget KEY,NSEMS,FLAGS \n", " get set of SysV semaphores \n" }, \
{ "semop", " semop KEY,OPSTRING \n", " SysV semaphore operations \n" }, \
{ "shmctl", " shmctl ID,CMD,ARG \n", " SysV shared memory operations \n" }, \
{ "shmget", " shmget KEY,SIZE,FLAGS \n", " get SysV shared memory segment identifier \n" }, \
{ "shmread", " shmread ID,VAR,POS,SIZE \n shmwrite ID,STRING,POS,SIZE \n", " read SysV shared memory \n write SysV shared memory \n" }, \
{ "shmwrite", " shmwrite ID,STRING,POS,SIZE \n", " write SysV shared memory \n" }, \
{ "endgrent", " endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "endhostent", " endhostent \n endnetent \n endprotoent \n endservent \n", " be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "endnetent", " endnetent \n endprotoent \n endservent \n", " be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "endpwent", " endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getgrent", " getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getgrgid", " getgrgid GID \n getservbyname NAME,PROTO \n gethostbyaddr ADDR,ADDRTYPE \n getnetbyaddr ADDR,ADDRTYPE \n getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get group record given group user ID \n get services record given its name \n get host record given its address \n get network record given its address \n get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getgrnam", " getgrnam NAME \n gethostbyname NAME \n getnetbyname NAME \n getprotobyname NAME \n getpwuid UID \n getgrgid GID \n getservbyname NAME,PROTO \n gethostbyaddr ADDR,ADDRTYPE \n getnetbyaddr ADDR,ADDRTYPE \n getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get group record given group name \n get host record given name \n get networks record given name \n get protocol record given name \n get passwd record given user ID \n get group record given group user ID \n get services record given its name \n get host record given its address \n get network record given its address \n get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getlogin", " getlogin \n", " return who logged in at this tty \n" }, \
{ "getpwent", " getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getpwnam", " getpwnam NAME \n getgrnam NAME \n gethostbyname NAME \n getnetbyname NAME \n getprotobyname NAME \n getpwuid UID \n getgrgid GID \n getservbyname NAME,PROTO \n gethostbyaddr ADDR,ADDRTYPE \n getnetbyaddr ADDR,ADDRTYPE \n getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get passwd record given user login name \n get group record given group name \n get host record given name \n get networks record given name \n get protocol record given name \n get passwd record given user ID \n get group record given group user ID \n get services record given its name \n get host record given its address \n get network record given its address \n get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getpwuid", " getpwuid UID \n getgrgid GID \n getservbyname NAME,PROTO \n gethostbyaddr ADDR,ADDRTYPE \n getnetbyaddr ADDR,ADDRTYPE \n getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get passwd record given user ID \n get group record given group user ID \n get services record given its name \n get host record given its address \n get network record given its address \n get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "setgrent", " setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "setpwent", " setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "endprotoent", " endprotoent \n endservent \n", " be done using protocols file \n be done using services file \n" }, \
{ "endservent", " endservent \n", " be done using services file \n" }, \
{ "gethostbyaddr", " gethostbyaddr ADDR,ADDRTYPE \n getnetbyaddr ADDR,ADDRTYPE \n getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get host record given its address \n get network record given its address \n get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "gethostbyname", " gethostbyname NAME \n getnetbyname NAME \n getprotobyname NAME \n getpwuid UID \n getgrgid GID \n getservbyname NAME,PROTO \n gethostbyaddr ADDR,ADDRTYPE \n getnetbyaddr ADDR,ADDRTYPE \n getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get host record given name \n get networks record given name \n get protocol record given name \n get passwd record given user ID \n get group record given group user ID \n get services record given its name \n get host record given its address \n get network record given its address \n get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "gethostent", " gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getnetbyaddr", " getnetbyaddr ADDR,ADDRTYPE \n getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get network record given its address \n get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getnetbyname", " getnetbyname NAME \n getprotobyname NAME \n getpwuid UID \n getgrgid GID \n getservbyname NAME,PROTO \n gethostbyaddr ADDR,ADDRTYPE \n getnetbyaddr ADDR,ADDRTYPE \n getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get networks record given name \n get protocol record given name \n get passwd record given user ID \n get group record given group user ID \n get services record given its name \n get host record given its address \n get network record given its address \n get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getnetent", " getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getprotobyname", " getprotobyname NAME \n getpwuid UID \n getgrgid GID \n getservbyname NAME,PROTO \n gethostbyaddr ADDR,ADDRTYPE \n getnetbyaddr ADDR,ADDRTYPE \n getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get protocol record given name \n get passwd record given user ID \n get group record given group user ID \n get services record given its name \n get host record given its address \n get network record given its address \n get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getprotobynumber", " getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getprotoent", " getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getservbyname", " getservbyname NAME,PROTO \n gethostbyaddr ADDR,ADDRTYPE \n getnetbyaddr ADDR,ADDRTYPE \n getprotobynumber NUMBER \n getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get services record given its name \n get host record given its address \n get network record given its address \n get protocol record numeric protocol \n get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getservbyport", " getservbyport PORT,PROTO \n getpwent \n getgrent \n gethostent \n getnetent \n getprotoent \n getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get services record given numeric port \n get next passwd record \n get next group record \n get next hosts record \n get next networks record \n get next protocols record \n get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "getservent", " getservent \n setpwent \n setgrent \n sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " get next services record \n prepare passwd file for use \n prepare group file for use \n prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "sethostent", " sethostent STAYOPEN \n setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " prepare hosts file for use \n prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "setnetent", " setnetent STAYOPEN \n setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " prepare networks file for use \n prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "setprotoent", " setprotoent STAYOPEN \n setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " prepare protocols file for use \n prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "setservent", " setservent STAYOPEN \n endpwent \n endgrent \n endhostent \n endnetent \n endprotoent \n endservent \n", " prepare services file for use \n be done using passwd file \n be done using group file \n be done using hosts file \n be done using networks file \n be done using protocols file \n be done using services file \n" }, \
{ "gmtime", " gmtime EXPR \n gmtime \n", " convert UNIX time into record or string using Greenwich time \n" }, \
{ "localtime", " localtime EXPR \n localtime \n", " convert UNIX time into record or string using local time \n" }, \
{ "time", " time \n", " return number of seconds since 1970 \n" }, \
{ "times", " times \n", " return elapsed time for self and child processes \n" }, \
};
/* @} */
