/* @{ */
static std::vector<std::array<std::string,3> > variables = {
{ "%!", " %OS_ERROR  \n\n %ERRNO  \n\n %!  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%+", " %{^CAPTURE}  \n\n %LAST_PAREN_MATCH  \n\n %+  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%-", " %-  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@+", " @LAST_MATCH_END  \n\n @+  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@-", " @LAST_MATCH_START  \n\n @-  \n\n $` is the same as substr($var, 0, $-[0])  \n\n $& is the same as substr($var, $-[0], $+[0] - $-[0])  \n\n $' is the same as substr($var, $+[0])  \n\n $1 is the same as substr($var, $-[1], $+[1] - $-[1])  \n\n $2 is the same as substr($var, $-[2], $+[2] - $-[2])  \n\n $3 is the same as substr($var, $-[3], $+[3] - $-[3])  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@_", " @ARG  \n\n @_  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$!", " $OS_ERROR  \n\n $ERRNO  \n\n $!  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$#", " $#  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$%", " HANDLE-format_page_number(EXPR)  \n\n $FORMAT_PAGE_NUMBER  \n\n $%  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$&", " $MATCH  \n\n $&  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$'", " $POSTMATCH  \n\n $'  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$(", " $REAL_GROUP_ID  \n\n $GID  \n\n $(  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$)", " $EFFECTIVE_GROUP_ID  \n\n $EGID  \n\n $)  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$+", " $LAST_PAREN_MATCH  \n\n $+  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$,", " IO::Handle-output_field_separator( EXPR )  \n\n $OUTPUT_FIELD_SEPARATOR  \n\n $OFS  \n\n $,  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$-", " HANDLE-format_lines_left(EXPR)  \n\n $FORMAT_LINES_LEFT  \n\n $-  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$.", " HANDLE-input_line_number( EXPR )  \n\n $INPUT_LINE_NUMBER  \n\n $NR  \n\n $.  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$/", " IO::Handle-input_record_separator( EXPR )  \n\n $INPUT_RECORD_SEPARATOR  \n\n $RS  \n\n $/  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$:", " IO::Handle-format_line_break_characters EXPR  \n\n $FORMAT_LINE_BREAK_CHARACTERS  \n\n $:  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$;", " $SUBSCRIPT_SEPARATOR  \n\n $SUBSEP  \n\n $;  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$<", " $REAL_USER_ID  \n\n $UID  \n\n $<  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$=", " HANDLE-format_lines_per_page(EXPR)  \n\n $FORMAT_LINES_PER_PAGE  \n\n $=  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$>", " $EFFECTIVE_USER_ID  \n\n $EUID  \n\n $  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$@", " $EVAL_ERROR  \n\n $@  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$[", " $[  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$]", " $OLD_PERL_VERSION  \n\n $]  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^", " HANDLE-format_top_name(EXPR)  \n\n $FORMAT_TOP_NAME  \n\n $^  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$_", " $ARG  \n\n $_  \n\n *  \n\n *  \n\n *  \n\n *  \n\n *  \n\n *  \n\n *  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$`", " $PREMATCH  \n\n $`  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$|", " HANDLE-autoflush( EXPR )  \n\n $OUTPUT_AUTOFLUSH  \n\n $|  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$~", " HANDLE-format_name(EXPR)  \n\n $FORMAT_NAME  \n\n $~  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$$", " $PROCESS_ID  \n\n $PID  \n\n $$  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$0", " $PROGRAM_NAME  \n\n $0  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^A", " $ACCUMULATOR  \n\n $^A  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$a", " $a  \n\n $b  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$ACCUMULATOR", " $ACCUMULATOR  \n\n $^A  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$ARG", " $ARG  \n\n $_  \n\n *  \n\n *  \n\n *  \n\n *  \n\n *  \n\n *  \n\n *  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$ARGV", " $ARGV  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$b", " $a  \n\n $b  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$BASETIME", " $BASETIME  \n\n $^T  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^C", " $COMPILING  \n\n $^C  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$CHILD_ERROR", " $CHILD_ERROR  \n\n $?  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^CHILD_ERROR_NATIVE}", " ${^CHILD_ERROR_NATIVE}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$COMPILING", " $COMPILING  \n\n $^C  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^D", " $DEBUGGING  \n\n $^D  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$DEBUGGING", " $DEBUGGING  \n\n $^D  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^E", " $EXTENDED_OS_ERROR  \n\n $^E  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$EFFECTIVE_GROUP_ID", " $EFFECTIVE_GROUP_ID  \n\n $EGID  \n\n $)  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$EFFECTIVE_USER_ID", " $EFFECTIVE_USER_ID  \n\n $EUID  \n\n $  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$EGID", " $EFFECTIVE_GROUP_ID  \n\n $EGID  \n\n $)  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^ENCODING}", " ${^ENCODING}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$ERRNO", " $OS_ERROR  \n\n $ERRNO  \n\n $!  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$EUID", " $EFFECTIVE_USER_ID  \n\n $EUID  \n\n $  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$EVAL_ERROR", " $EVAL_ERROR  \n\n $@  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$EXCEPTIONS_BEING_CAUGHT", " $EXCEPTIONS_BEING_CAUGHT  \n\n $^S  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$EXECUTABLE_NAME", " $EXECUTABLE_NAME  \n\n $^X  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$EXTENDED_OS_ERROR", " $EXTENDED_OS_ERROR  \n\n $^E  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^F", " $SYSTEM_FD_MAX  \n\n $^F  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$FORMAT_FORMFEED", " IO::Handle-format_formfeed(EXPR)  \n\n $FORMAT_FORMFEED  \n\n $^L  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$FORMAT_LINE_BREAK_CHARACTERS", " IO::Handle-format_line_break_characters EXPR  \n\n $FORMAT_LINE_BREAK_CHARACTERS  \n\n $:  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$FORMAT_LINES_LEFT", " HANDLE-format_lines_left(EXPR)  \n\n $FORMAT_LINES_LEFT  \n\n $-  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$FORMAT_LINES_PER_PAGE", " HANDLE-format_lines_per_page(EXPR)  \n\n $FORMAT_LINES_PER_PAGE  \n\n $=  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$FORMAT_NAME", " HANDLE-format_name(EXPR)  \n\n $FORMAT_NAME  \n\n $~  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$FORMAT_PAGE_NUMBER", " HANDLE-format_page_number(EXPR)  \n\n $FORMAT_PAGE_NUMBER  \n\n $%  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$FORMAT_TOP_NAME", " HANDLE-format_top_name(EXPR)  \n\n $FORMAT_TOP_NAME  \n\n $^  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$GID", " $REAL_GROUP_ID  \n\n $GID  \n\n $(  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^GLOBAL_PHASE}", " ${^GLOBAL_PHASE}  \n\n CONSTRUCT  \n\n START  \n\n CHECK  \n\n INIT  \n\n RUN  \n\n END  \n\n DESTRUCT  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^H", " $^H  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^I", " $INPLACE_EDIT  \n\n $^I  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$<I<digits>>", " $<digits ($1, $2, ...)  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$INPLACE_EDIT", " $INPLACE_EDIT  \n\n $^I  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$INPUT_LINE_NUMBER", " HANDLE-input_line_number( EXPR )  \n\n $INPUT_LINE_NUMBER  \n\n $NR  \n\n $.  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$INPUT_RECORD_SEPARATOR", " IO::Handle-input_record_separator( EXPR )  \n\n $INPUT_RECORD_SEPARATOR  \n\n $RS  \n\n $/  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^L", " IO::Handle-format_formfeed(EXPR)  \n\n $FORMAT_FORMFEED  \n\n $^L  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^LAST_FH}", " ${^LAST_FH}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$LAST_PAREN_MATCH", " $LAST_PAREN_MATCH  \n\n $+  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$LAST_REGEXP_CODE_RESULT", " $LAST_REGEXP_CODE_RESULT  \n\n $^R  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$LAST_SUBMATCH_RESULT", " $LAST_SUBMATCH_RESULT  \n\n $^N  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$LIST_SEPARATOR", " $LIST_SEPARATOR  \n\n $\"  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^M", " $^M  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^MATCH}", " ${^MATCH}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$MATCH", " $MATCH  \n\n $&  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^N", " $LAST_SUBMATCH_RESULT  \n\n $^N  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$NR", " HANDLE-input_line_number( EXPR )  \n\n $INPUT_LINE_NUMBER  \n\n $NR  \n\n $.  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^O", " $OSNAME  \n\n $^O  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$OFS", " IO::Handle-output_field_separator( EXPR )  \n\n $OUTPUT_FIELD_SEPARATOR  \n\n $OFS  \n\n $,  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$OLD_PERL_VERSION", " $OLD_PERL_VERSION  \n\n $]  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^OPEN}", " ${^OPEN}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$ORS", " IO::Handle-output_record_separator( EXPR )  \n\n $OUTPUT_RECORD_SEPARATOR  \n\n $ORS  \n\n $\\  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$OS_ERROR", " $OS_ERROR  \n\n $ERRNO  \n\n $!  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$OSNAME", " $OSNAME  \n\n $^O  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$OUTPUT_AUTOFLUSH", " HANDLE-autoflush( EXPR )  \n\n $OUTPUT_AUTOFLUSH  \n\n $|  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$OUTPUT_FIELD_SEPARATOR", " IO::Handle-output_field_separator( EXPR )  \n\n $OUTPUT_FIELD_SEPARATOR  \n\n $OFS  \n\n $,  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$OUTPUT_RECORD_SEPARATOR", " IO::Handle-output_record_separator( EXPR )  \n\n $OUTPUT_RECORD_SEPARATOR  \n\n $ORS  \n\n $\\  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^P", " $PERLDB  \n\n $^P  \n\n 0x01  \n\n 0x02  \n\n 0x04  \n\n 0x08  \n\n 0x10  \n\n 0x20  \n\n 0x40  \n\n 0x80  \n\n 0x100  \n\n 0x200  \n\n 0x400  \n\n 0x800  \n\n 0x1000  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$PERLDB", " $PERLDB  \n\n $^P  \n\n 0x01  \n\n 0x02  \n\n 0x04  \n\n 0x08  \n\n 0x10  \n\n 0x20  \n\n 0x40  \n\n 0x80  \n\n 0x100  \n\n 0x200  \n\n 0x400  \n\n 0x800  \n\n 0x1000  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$PERL_VERSION", " $PERL_VERSION  \n\n $^V  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$PID", " $PROCESS_ID  \n\n $PID  \n\n $$  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^POSTMATCH}", " ${^POSTMATCH}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$POSTMATCH", " $POSTMATCH  \n\n $'  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^PREMATCH}", " ${^PREMATCH}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$PREMATCH", " $PREMATCH  \n\n $`  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$PROCESS_ID", " $PROCESS_ID  \n\n $PID  \n\n $$  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$PROGRAM_NAME", " $PROGRAM_NAME  \n\n $0  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^R", " $LAST_REGEXP_CODE_RESULT  \n\n $^R  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$REAL_GROUP_ID", " $REAL_GROUP_ID  \n\n $GID  \n\n $(  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$REAL_USER_ID", " $REAL_USER_ID  \n\n $UID  \n\n $<  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^RE_DEBUG_FLAGS}", " ${^RE_DEBUG_FLAGS}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^RE_TRIE_MAXBUF}", " ${^RE_TRIE_MAXBUF}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$RS", " IO::Handle-input_record_separator( EXPR )  \n\n $INPUT_RECORD_SEPARATOR  \n\n $RS  \n\n $/  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^S", " $EXCEPTIONS_BEING_CAUGHT  \n\n $^S  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^SAFE_LOCALES}", " ${^SAFE_LOCALES}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$SUBSCRIPT_SEPARATOR", " $SUBSCRIPT_SEPARATOR  \n\n $SUBSEP  \n\n $;  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$SUBSEP", " $SUBSCRIPT_SEPARATOR  \n\n $SUBSEP  \n\n $;  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$SYSTEM_FD_MAX", " $SYSTEM_FD_MAX  \n\n $^F  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^T", " $BASETIME  \n\n $^T  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^TAINT}", " ${^TAINT}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$UID", " $REAL_USER_ID  \n\n $UID  \n\n $<  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^UNICODE}", " ${^UNICODE}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^UTF8CACHE}", " ${^UTF8CACHE}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^UTF8LOCALE}", " ${^UTF8LOCALE}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^V", " $PERL_VERSION  \n\n $^V  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^W", " $WARNING  \n\n $^W  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$WARNING", " $WARNING  \n\n $^W  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^WARNING_BITS}", " ${^WARNING_BITS}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "${^WIN32_SLOPPY_STAT}", " ${^WIN32_SLOPPY_STAT}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "$^X", " $EXECUTABLE_NAME  \n\n $^X  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@ARG", " @ARG  \n\n @_  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@ARGV", " @ARGV  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "ARGV", " ARGV  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "ARGVOUT", " ARGVOUT  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%{^CAPTURE}", " %{^CAPTURE}  \n\n %LAST_PAREN_MATCH  \n\n %+  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@{^CAPTURE}", " @{^CAPTURE}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%{^CAPTURE_ALL}", " %{^CAPTURE_ALL}  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "CHECK", " CHECK  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "CONSTRUCT", " CONSTRUCT  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "DESTRUCT", " DESTRUCT  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "END", " END  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%ENV", " %ENV  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%ERRNO", " %OS_ERROR  \n\n %ERRNO  \n\n %!  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@F", " @F  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%^H", " %^H  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%INC", " %INC  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@INC", " @INC  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "INIT", " INIT  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@ISA", " @ISA  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@LAST_MATCH_END", " @LAST_MATCH_END  \n\n @+  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "@LAST_MATCH_START", " @LAST_MATCH_START  \n\n @-  \n\n $` is the same as substr($var, 0, $-[0])  \n\n $& is the same as substr($var, $-[0], $+[0] - $-[0])  \n\n $' is the same as substr($var, $+[0])  \n\n $1 is the same as substr($var, $-[1], $+[1] - $-[1])  \n\n $2 is the same as substr($var, $-[2], $+[2] - $-[2])  \n\n $3 is the same as substr($var, $-[3], $+[3] - $-[3])  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%LAST_PAREN_MATCH", " %{^CAPTURE}  \n\n %LAST_PAREN_MATCH  \n\n %+  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%OS_ERROR", " %OS_ERROR  \n\n %ERRNO  \n\n %!  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "RUN", " RUN  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "%SIG", " %SIG  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
{ "START", " START  \n\n", "\\ \\ \n[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ \\ \n" }, \
};
/* @} */
