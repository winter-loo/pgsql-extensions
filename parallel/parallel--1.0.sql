CREATE OR REPLACE FUNCTION parallel(text, text, int)
RETURNS int8
AS 'MODULE_PATHNAME', 'parallel'
LANGUAGE C
STRICT;
