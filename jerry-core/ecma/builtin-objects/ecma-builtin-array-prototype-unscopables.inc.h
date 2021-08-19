/* Copyright JS Foundation and other contributors, http://js.foundation
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

/*
 * Array.prototype[@@unscopables] built-in description
 */

#include "ecma-builtin-helpers-macro-defines.inc.h"

#if ENABLED (JERRY_ES2015)

SIMPLE_VALUE (LIT_MAGIC_STRING_COPY_WITHIN,
              ECMA_VALUE_TRUE,
              ECMA_PROPERTY_CONFIGURABLE_ENUMERABLE_WRITABLE)

SIMPLE_VALUE (LIT_MAGIC_STRING_ENTRIES,
              ECMA_VALUE_TRUE,
              ECMA_PROPERTY_CONFIGURABLE_ENUMERABLE_WRITABLE)

SIMPLE_VALUE (LIT_MAGIC_STRING_FILL,
              ECMA_VALUE_TRUE,
              ECMA_PROPERTY_CONFIGURABLE_ENUMERABLE_WRITABLE)

SIMPLE_VALUE (LIT_MAGIC_STRING_FIND,
              ECMA_VALUE_TRUE,
              ECMA_PROPERTY_CONFIGURABLE_ENUMERABLE_WRITABLE)

SIMPLE_VALUE (LIT_MAGIC_STRING_FIND_INDEX,
              ECMA_VALUE_TRUE,
              ECMA_PROPERTY_CONFIGURABLE_ENUMERABLE_WRITABLE)

SIMPLE_VALUE (LIT_MAGIC_STRING_KEYS,
              ECMA_VALUE_TRUE,
              ECMA_PROPERTY_CONFIGURABLE_ENUMERABLE_WRITABLE)

SIMPLE_VALUE (LIT_MAGIC_STRING_VALUES,
              ECMA_VALUE_TRUE,
              ECMA_PROPERTY_CONFIGURABLE_ENUMERABLE_WRITABLE)

#endif /* ENABLED (JERRY_ES2015) */

#include "ecma-builtin-helpers-macro-undefs.inc.h"
