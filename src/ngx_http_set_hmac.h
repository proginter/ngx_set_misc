#include <ngx_core.h>
#include <ngx_config.h>
#include <ngx_http.h>

ngx_int_t ngx_http_set_misc_set_hmac_sha1_b64(ngx_http_request_t *r,
        ngx_str_t *res, ngx_http_variable_value_t *v);
