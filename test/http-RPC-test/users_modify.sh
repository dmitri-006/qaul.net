#!/bin/bash

# Set user name `testuser` and real name `Test User`
# 
# usage
# ./set-user-bio.sh
#

curl -i  \
    -H "Content-Type: application/json" \
    -d "{ 
        \"id\": \"1\", 
        \"kind\": \"users\", 
        \"method\": \"modify\",
        \"data\": {
            \"display_name\": {
				\"set\": \"testuser\"
			},
            \"real_name\": \"unset\"
        },
        \"auth\": {
            \"id\":\"$QAUL_ID\",
            \"token\":\"$QAUL_TOKEN\"
        }
    }" \
    "http://127.0.0.1:9900/api"