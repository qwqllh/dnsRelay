/**
 * MIT License
 *
 * Copyright (c) 2021 qwqllh
 * 
 * Permission is hereby granted, free of charge, to any person obtaining a copy
 * of this software and associated documentation files (the "Software"), to deal
 * in the Software without restriction, including without limitation the rights
 * to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 * copies of the Software, and to permit persons to whom the Software is
 * furnished to do so, subject to the following conditions:
 * 
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 * 
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 * FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 * AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 * LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 * OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
 * SOFTWARE.
 */

#ifndef MODEL_META_H_
#define MODEL_META_H_

typedef struct __dns_header {
	uint16_t id;
	uint16_t flags;
	uint16_t question;
	uint16_t answer;
	uint16_t authority;
	uint16_t additional;
} dns_header;

typedef struct __query_meta {
	void *query_begin;
	uint16_t *type_ptr;
	uint16_t *class_ptr;
	char *name; /* The character behind name is separator. */
	void *query_end;
} query_meta;

typedef struct __response_meta {
	void *response_begin;
	char *name;
	uint16_t *type_ptr;
	uint16_t *class_ptr;
	uint32_t *ttl_ptr;
	uint16_t *data_len_ptr;
	void *data_ptr;
	void *response_end;
} response_meta;

#endif /* MODEL_META_H_ */