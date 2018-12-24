/* @{ */
static std::vector<std::array<std::string,3> > variables = {
{ "%!", " %OS_ERROR \n %ERRNO \n %! \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%+", " %{^CAPTURE} \n %LAST_PAREN_MATCH \n %+ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%-", " %- \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@+", " @LAST_MATCH_END \n @+ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@-", " @LAST_MATCH_START \n @- \n $` is the same as substr($var, 0, $-[0]) \n $& is the same as substr($var, $-[0], $+[0] - $-[0]) \n $' is the same as substr($var, $+[0]) \n $1 is the same as substr($var, $-[1], $+[1] - $-[1]) \n $2 is the same as substr($var, $-[2], $+[2] - $-[2]) \n $3 is the same as substr($var, $-[3], $+[3] - $-[3]) \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@_", " @ARG \n @_ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$!", " $OS_ERROR \n $ERRNO \n $! \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$#", " $# \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$%", " HANDLE-format_page_number(EXPR) \n $FORMAT_PAGE_NUMBER \n $% \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$&", " $MATCH \n $& \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$'", " $POSTMATCH \n $' \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$(", " $REAL_GROUP_ID \n $GID \n $( \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$)", " $EFFECTIVE_GROUP_ID \n $EGID \n $) \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$+", " $LAST_PAREN_MATCH \n $+ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$,", " IO::Handle-output_field_separator( EXPR ) \n $OUTPUT_FIELD_SEPARATOR \n $OFS \n $, \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$-", " HANDLE-format_lines_left(EXPR) \n $FORMAT_LINES_LEFT \n $- \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$.", " HANDLE-input_line_number( EXPR ) \n $INPUT_LINE_NUMBER \n $NR \n $. \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$/", " IO::Handle-input_record_separator( EXPR ) \n $INPUT_RECORD_SEPARATOR \n $RS \n $/ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$:", " IO::Handle-format_line_break_characters EXPR \n $FORMAT_LINE_BREAK_CHARACTERS \n $: \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$;", " $SUBSCRIPT_SEPARATOR \n $SUBSEP \n $; \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$<", " $REAL_USER_ID \n $UID \n $< \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$=", " HANDLE-format_lines_per_page(EXPR) \n $FORMAT_LINES_PER_PAGE \n $= \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$>", " $EFFECTIVE_USER_ID \n $EUID \n $ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$@", " $EVAL_ERROR \n $@ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$[", " $[ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$]", " $OLD_PERL_VERSION \n $] \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^", " HANDLE-format_top_name(EXPR) \n $FORMAT_TOP_NAME \n $^ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$_", " $ARG \n $_ \n * \n * \n * \n * \n * \n * \n * \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$`", " $PREMATCH \n $` \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$|", " HANDLE-autoflush( EXPR ) \n $OUTPUT_AUTOFLUSH \n $| \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$~", " HANDLE-format_name(EXPR) \n $FORMAT_NAME \n $~ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$$", " $PROCESS_ID \n $PID \n $$ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$0", " $PROGRAM_NAME \n $0 \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^A", " $ACCUMULATOR \n $^A \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$a", " $a \n $b \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$ACCUMULATOR", " $ACCUMULATOR \n $^A \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$ARG", " $ARG \n $_ \n * \n * \n * \n * \n * \n * \n * \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$ARGV", " $ARGV \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$b", " $a \n $b \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$BASETIME", " $BASETIME \n $^T \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^C", " $COMPILING \n $^C \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$CHILD_ERROR", " $CHILD_ERROR \n $? \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^CHILD_ERROR_NATIVE}", " ${^CHILD_ERROR_NATIVE} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$COMPILING", " $COMPILING \n $^C \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^D", " $DEBUGGING \n $^D \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$DEBUGGING", " $DEBUGGING \n $^D \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^E", " $EXTENDED_OS_ERROR \n $^E \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$EFFECTIVE_GROUP_ID", " $EFFECTIVE_GROUP_ID \n $EGID \n $) \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$EFFECTIVE_USER_ID", " $EFFECTIVE_USER_ID \n $EUID \n $ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$EGID", " $EFFECTIVE_GROUP_ID \n $EGID \n $) \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^ENCODING}", " ${^ENCODING} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$ERRNO", " $OS_ERROR \n $ERRNO \n $! \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$EUID", " $EFFECTIVE_USER_ID \n $EUID \n $ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$EVAL_ERROR", " $EVAL_ERROR \n $@ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$EXCEPTIONS_BEING_CAUGHT", " $EXCEPTIONS_BEING_CAUGHT \n $^S \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$EXECUTABLE_NAME", " $EXECUTABLE_NAME \n $^X \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$EXTENDED_OS_ERROR", " $EXTENDED_OS_ERROR \n $^E \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^F", " $SYSTEM_FD_MAX \n $^F \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$FORMAT_FORMFEED", " IO::Handle-format_formfeed(EXPR) \n $FORMAT_FORMFEED \n $^L \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$FORMAT_LINE_BREAK_CHARACTERS", " IO::Handle-format_line_break_characters EXPR \n $FORMAT_LINE_BREAK_CHARACTERS \n $: \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$FORMAT_LINES_LEFT", " HANDLE-format_lines_left(EXPR) \n $FORMAT_LINES_LEFT \n $- \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$FORMAT_LINES_PER_PAGE", " HANDLE-format_lines_per_page(EXPR) \n $FORMAT_LINES_PER_PAGE \n $= \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$FORMAT_NAME", " HANDLE-format_name(EXPR) \n $FORMAT_NAME \n $~ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$FORMAT_PAGE_NUMBER", " HANDLE-format_page_number(EXPR) \n $FORMAT_PAGE_NUMBER \n $% \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$FORMAT_TOP_NAME", " HANDLE-format_top_name(EXPR) \n $FORMAT_TOP_NAME \n $^ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$GID", " $REAL_GROUP_ID \n $GID \n $( \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^GLOBAL_PHASE}", " ${^GLOBAL_PHASE} \n CONSTRUCT \n START \n CHECK \n INIT \n RUN \n END \n DESTRUCT \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^H", " $^H \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^I", " $INPLACE_EDIT \n $^I \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$INPLACE_EDIT", " $INPLACE_EDIT \n $^I \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$INPUT_LINE_NUMBER", " HANDLE-input_line_number( EXPR ) \n $INPUT_LINE_NUMBER \n $NR \n $. \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$INPUT_RECORD_SEPARATOR", " IO::Handle-input_record_separator( EXPR ) \n $INPUT_RECORD_SEPARATOR \n $RS \n $/ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^L", " IO::Handle-format_formfeed(EXPR) \n $FORMAT_FORMFEED \n $^L \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^LAST_FH}", " ${^LAST_FH} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$LAST_PAREN_MATCH", " $LAST_PAREN_MATCH \n $+ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$LAST_REGEXP_CODE_RESULT", " $LAST_REGEXP_CODE_RESULT \n $^R \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$LAST_SUBMATCH_RESULT", " $LAST_SUBMATCH_RESULT \n $^N \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$LIST_SEPARATOR", " $LIST_SEPARATOR \n $\" \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^M", " $^M \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^MATCH}", " ${^MATCH} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$MATCH", " $MATCH \n $& \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^N", " $LAST_SUBMATCH_RESULT \n $^N \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$NR", " HANDLE-input_line_number( EXPR ) \n $INPUT_LINE_NUMBER \n $NR \n $. \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^O", " $OSNAME \n $^O \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$OFS", " IO::Handle-output_field_separator( EXPR ) \n $OUTPUT_FIELD_SEPARATOR \n $OFS \n $, \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$OLD_PERL_VERSION", " $OLD_PERL_VERSION \n $] \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^OPEN}", " ${^OPEN} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$ORS", " IO::Handle-output_record_separator( EXPR ) \n $OUTPUT_RECORD_SEPARATOR \n $ORS \n $\\ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$OS_ERROR", " $OS_ERROR \n $ERRNO \n $! \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$OSNAME", " $OSNAME \n $^O \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$OUTPUT_AUTOFLUSH", " HANDLE-autoflush( EXPR ) \n $OUTPUT_AUTOFLUSH \n $| \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$OUTPUT_FIELD_SEPARATOR", " IO::Handle-output_field_separator( EXPR ) \n $OUTPUT_FIELD_SEPARATOR \n $OFS \n $, \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$OUTPUT_RECORD_SEPARATOR", " IO::Handle-output_record_separator( EXPR ) \n $OUTPUT_RECORD_SEPARATOR \n $ORS \n $\\ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^P", " $PERLDB \n $^P \n 0x01 \n 0x02 \n 0x04 \n 0x08 \n 0x10 \n 0x20 \n 0x40 \n 0x80 \n 0x100 \n 0x200 \n 0x400 \n 0x800 \n 0x1000 \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$PERLDB", " $PERLDB \n $^P \n 0x01 \n 0x02 \n 0x04 \n 0x08 \n 0x10 \n 0x20 \n 0x40 \n 0x80 \n 0x100 \n 0x200 \n 0x400 \n 0x800 \n 0x1000 \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$PERL_VERSION", " $PERL_VERSION \n $^V \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$PID", " $PROCESS_ID \n $PID \n $$ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^POSTMATCH}", " ${^POSTMATCH} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$POSTMATCH", " $POSTMATCH \n $' \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^PREMATCH}", " ${^PREMATCH} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$PREMATCH", " $PREMATCH \n $` \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$PROCESS_ID", " $PROCESS_ID \n $PID \n $$ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$PROGRAM_NAME", " $PROGRAM_NAME \n $0 \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^R", " $LAST_REGEXP_CODE_RESULT \n $^R \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$REAL_GROUP_ID", " $REAL_GROUP_ID \n $GID \n $( \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$REAL_USER_ID", " $REAL_USER_ID \n $UID \n $< \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^RE_DEBUG_FLAGS}", " ${^RE_DEBUG_FLAGS} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^RE_TRIE_MAXBUF}", " ${^RE_TRIE_MAXBUF} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$RS", " IO::Handle-input_record_separator( EXPR ) \n $INPUT_RECORD_SEPARATOR \n $RS \n $/ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^S", " $EXCEPTIONS_BEING_CAUGHT \n $^S \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^SAFE_LOCALES}", " ${^SAFE_LOCALES} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$SUBSCRIPT_SEPARATOR", " $SUBSCRIPT_SEPARATOR \n $SUBSEP \n $; \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$SUBSEP", " $SUBSCRIPT_SEPARATOR \n $SUBSEP \n $; \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$SYSTEM_FD_MAX", " $SYSTEM_FD_MAX \n $^F \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^T", " $BASETIME \n $^T \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^TAINT}", " ${^TAINT} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$UID", " $REAL_USER_ID \n $UID \n $< \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^UNICODE}", " ${^UNICODE} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^UTF8CACHE}", " ${^UTF8CACHE} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^UTF8LOCALE}", " ${^UTF8LOCALE} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^V", " $PERL_VERSION \n $^V \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^W", " $WARNING \n $^W \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$WARNING", " $WARNING \n $^W \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^WARNING_BITS}", " ${^WARNING_BITS} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "${^WIN32_SLOPPY_STAT}", " ${^WIN32_SLOPPY_STAT} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "$^X", " $EXECUTABLE_NAME \n $^X \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@ARG", " @ARG \n @_ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@ARGV", " @ARGV \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "ARGV", " ARGV \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "ARGVOUT", " ARGVOUT \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%{^CAPTURE}", " %{^CAPTURE} \n %LAST_PAREN_MATCH \n %+ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@{^CAPTURE}", " @{^CAPTURE} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%{^CAPTURE_ALL}", " %{^CAPTURE_ALL} \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "CHECK", " CHECK \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "CONSTRUCT", " CONSTRUCT \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "DESTRUCT", " DESTRUCT \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "END", " END \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%ENV", " %ENV \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%ERRNO", " %OS_ERROR \n %ERRNO \n %! \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@F", " @F \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%^H", " %^H \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%INC", " %INC \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@INC", " @INC \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "INIT", " INIT \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@ISA", " @ISA \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@LAST_MATCH_END", " @LAST_MATCH_END \n @+ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "@LAST_MATCH_START", " @LAST_MATCH_START \n @- \n $` is the same as substr($var, 0, $-[0]) \n $& is the same as substr($var, $-[0], $+[0] - $-[0]) \n $' is the same as substr($var, $+[0]) \n $1 is the same as substr($var, $-[1], $+[1] - $-[1]) \n $2 is the same as substr($var, $-[2], $+[2] - $-[2]) \n $3 is the same as substr($var, $-[3], $+[3] - $-[3]) \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%LAST_PAREN_MATCH", " %{^CAPTURE} \n %LAST_PAREN_MATCH \n %+ \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%OS_ERROR", " %OS_ERROR \n %ERRNO \n %! \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "RUN", " RUN \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "%SIG", " %SIG \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
{ "START", " START \n", "[more](https://learn.perl.org/docs/keywords.html#perlvar)\\ " }, \
};
/* @} */
