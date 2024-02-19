/*
 * Copyright (c) 2020-2023 Siddharth Chandrasekaran <sidcha.dev@gmail.com>
 *
 * SPDX-License-Identifier: Apache-2.0
 */

#ifndef _OSDP_CONFIG_H_
#define _OSDP_CONFIG_H_

/**
 * @brief The following macros are defined defined from the variable in cmake
 * files. All @XXX@ are replaced by the value of XXX as resolved by cmake.
 */
#define PROJECT_VERSION                "@PROJECT_VERSION@"
#define PROJECT_NAME                   "@PROJECT_NAME@"
#define GIT_BRANCH                     "@GIT_BRANCH@"
#define GIT_REV                        "@GIT_REV@"
#define GIT_TAG                        "@GIT_TAG@"
#define GIT_DIFF                       "@GIT_DIFF@"
#define REPO_ROOT                      "/Users/darryl/Documents/Arduino/libraries/" // vk2tds

/**
 * @brief Other OSDP constants
 */
#define OSDP_PD_SC_RETRY_MS                     (600 * 1000)
#define OSDP_PD_POLL_TIMEOUT_MS                 (50)
#define OSDP_PD_SC_TIMEOUT_MS                   (2500) // Was 800 VK2TDS
#define OSDP_PD_ONLINE_TOUT_MS                  (600)

#define OSDP_RESP_TOUT_MS                       (200)
#define OSDP_ONLINE_RETRY_WAIT_MAX_MS           (300 * 1000)
#define OSDP_CMD_RETRY_WAIT_MS                  (300)
#define OSDP_PACKET_BUF_SIZE                    (256)
#define OSDP_RX_RB_SIZE                         (512)
#define OSDP_CP_CMD_POOL_SIZE                   (32)
#define OSDP_FILE_ERROR_RETRY_MAX               (10)
#define OSDP_PD_MAX                             (126)
#define OSDP_CMD_ID_OFFSET                      (5)

#endif /* _OSDP_CONFIG_H_ */
