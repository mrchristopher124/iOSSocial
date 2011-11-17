/*
 * Copyright 2011 Mad Races, Inc.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *    http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef iOSSocial_iOSSocialServiceOAuth1ProviderConstants_h
#define iOSSocial_iOSSocialServiceOAuth1ProviderConstants_h

// OAuth Params Dictionary Keys
static NSString *const kSMOAuth1ClientID         = @"clientID";
static NSString *const kSMOAuth1ClientSecret     = @"clientSecret";
// This has to match the callback URL you setup on the provider's site for your app
// or you will get an OAuth error!
// You can make up an arbitrary redirectURI.  The controller will watch for
// the server to redirect the web view to this URI, but this URI will not be
// loaded, so it need not be for any actual web page.
static NSString *const kSMOAuth1RedirectURI      = @"redirectURI";
// Make this a unique name. Incorporate the name of your app.
// Note: this should perhaps be internalized.
static NSString *const kSMOAuth1KeychainItemName = @"keychainItemName";

static NSString *const kSMOAuth1RequestTokenURL  = @"requestTokenURL";

static NSString *const kSMOAuth1AuthorizeURL     = @"authorizeURL";

static NSString *const kSMOAuth1AccessTokenURL   = @"accessTokenURL";

static NSString *const kSMOAuth1ServiceProviderName  = @"serviceProviderName";

static NSString *const kSMOAuth1Scope  = @"scope";

#endif
