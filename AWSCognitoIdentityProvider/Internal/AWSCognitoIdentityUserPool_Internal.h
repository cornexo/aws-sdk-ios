//
// Copyright 2014-2016 Amazon.com,
// Inc. or its affiliates. All Rights Reserved.
//
// Licensed under the Amazon Software License (the "License").
// You may not use this file except in compliance with the
// License. A copy of the License is located at
//
//     http://aws.amazon.com/asl/
//
// or in the "license" file accompanying this file. This file is
// distributed on an "AS IS" BASIS, WITHOUT WARRANTIES OR
// CONDITIONS OF ANY KIND, express or implied. See the License
// for the specific language governing permissions and
// limitations under the License.
//

#import <Foundation/Foundation.h>
#import "AWSCognitoIdentityUserPool.h"

@class AWSUICKeyChainStore;

@interface AWSCognitoIdentityUserPool()
@property (nonatomic, strong) AWSUICKeyChainStore *keychain;
@property (nonatomic, strong) NSString * clientSecret;

- (NSString *) calculateSecretHash: (NSString*) userName;
- (void) setCurrentUser:(NSString *) username;
- (NSArray<AWSCognitoIdentityProviderAttributeType*>*)getValidationData:(NSArray<AWSCognitoIdentityUserAttributeType*>*)devProvidedValidationData;
- (NSString*) currentUsername;
@end