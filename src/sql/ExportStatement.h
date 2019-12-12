#ifndef SQLPARSER_EXPORT_STATEMENT_H
#define SQLPARSER_EXPORT_STATEMENT_H

#include "ImportStatement.h"
#include "SQLStatement.h"

namespace hsql {
  // Represents SQL Copy statements.
  struct ExportStatement : SQLStatement {
    ExportStatement(ImportType type);
    virtual ~ExportStatement();

    ImportType type;
    char* filePath;
    char* schema;
    char* tableName;
  };

} // namespace hsql

#endif