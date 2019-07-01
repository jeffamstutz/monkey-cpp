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

#include "Token.h"

#include <algorithm>
#include <map>

namespace monkey {

  static const std::map<std::string, TokenType> keywords = {
      {"fn", TokenType::FUNCTION},
      {"let", TokenType::LET},
      {"true", TokenType::TRUE},
      {"false", TokenType::FALSE},
      {"if", TokenType::IF},
      {"else", TokenType::ELSE},
      {"return", TokenType::RETURN}};

  TokenType convertIfKeyword(const std::string_view &identifier)
  {
    auto found = std::find_if(keywords.begin(), keywords.end(), [&](auto &v) {
      return identifier == v.first;
    });
    return found != keywords.end() ? found->second : TokenType::IDENT;
  }

}  // namespace monkey