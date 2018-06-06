/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <Foundation/NSError.h>

@class IMCloudSyncTransaction;

@interface IMCloudSyncError : NSError {

	IMCloudSyncTransaction* _transaction;

}

@property (nonatomic,retain) IMCloudSyncTransaction * transaction;              //@synthesize transaction=_transaction - In the implementation block
+(id)cloudSyncErrorWithCode:(long long)arg1 localizedDescription:(id)arg2 transaction:(id)arg3 ;
+(id)userClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 ;
+(id)serverClampErrorWithTransaction:(id)arg1 retrySeconds:(double)arg2 ;
+(id)networkingBlockedErrorWithTransaction:(id)arg1 ;
+(id)cloudSyncDisabledErrorWithTransaction:(id)arg1 ;
+(id)transactionCancelledErrorWithTransaction:(id)arg1 ;
+(id)transactionMissingDomainErrorWithTransaction:(id)arg1 ;
+(id)transactionMissingURLErrorWithTransaction:(id)arg1 ;
+(id)killSwitchErrorWithTransaction:(id)arg1 ;
+(id)storeAccountSessionExpiredWithTransaction:(id)arg1 ;
+(id)delegateCancelledErrorWithTransaction:(id)arg1 ;
+(id)userCancelledSignInErrorWithTransaction:(id)arg1 ;
+(id)userEnteredWrongCredentialsErrorWithTransaction:(id)arg1 ;
+(id)unknownErrorWithTransaction:(id)arg1 ;
+(id)noStoreAccountErrorWithTransaction:(id)arg1 ;
+(id)storeLoggedOutErrorWithPreviousStoreAccountText:(id)arg1 transaction:(id)arg2 ;
+(id)storeAccountMismatchErrorWithPreviousStoreAccountText:(id)arg1 currentStoreAccontText:(id)arg2 transaction:(id)arg3 ;
-(id)previousStoreAccountKey;
-(id)currentStoreAccountKey;
-(void)setTransaction:(IMCloudSyncTransaction *)arg1 ;
-(IMCloudSyncTransaction *)transaction;
-(void)dealloc;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(BOOL)isClampError;
-(double)retrySeconds;
-(BOOL)isAuthenticationError;
-(BOOL)isTransactionCancelledError;
-(BOOL)isAccountsChangedError;
-(BOOL)isRecoverableError;
-(BOOL)isTransactionMissingInformationError;
@end

