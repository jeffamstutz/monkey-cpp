// ======================================================================== //
// Copyright Jefferson Amstutz                                              //
//                                                                          //
// Licensed under the Apache License, Version 2.0 (the "License");          //
// you may not use this file except in compliance with the License.         //
// You may obtain a copy of the License at                                  //
//                                                                          //
//     http://www.apache.org/licenses/LICENSE-2.0                           //
//                                                                          //
// Unless required by applicable law or agreed to in writing, software      //
// distributed under the License is distributed on an "AS IS" BASIS,        //
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. //
// See the License for the specific language governing permissions and      //
// limitations under the License.                                           //
// ======================================================================== //

#pragma once

#include <string>

namespace monkey {

  // Types ////////////////////////////////////////////////////////////////////

  enum TokenType
  {
    ILLEGAL,
    EoF,

    // Identifiers + literals
    IDENT,
    INT,
    STRING,

    // Operators
    ASSIGN,
    PLUS,
    MINUS,
    BANG,
    ASTERISK,
    SLASH,

    LT,
    GT,

    EQ,
    NOT_EQ,

    // Delimiters
    COMMA,
    SEMICOLON,
    LPAREN,
    RPAREN,
    LBRACE,
    RBRACE,
    LBRAKET,
    RBRAKET,
    COLON,

    // Keywords
    FUNCTION,
    LET,
    TRUE,
    FALSE,
    IF,
    ELSE,
    RETURN,
  };

  struct Token
  {
    TokenType type;
    std::string literal;
  };

  // Functions ////////////////////////////////////////////////////////////////

  TokenType convertIfKeyword(const std::string &identifier);

}  // namespace monkey
