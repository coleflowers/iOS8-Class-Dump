/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/AAUIAccountRepairRemoteUIDelegate.h>

@protocol COSAppleIDLinkerDelegate;
@class ACAccountStore, ACAccount, AAUIAccountRepairRemoteUI, RUIStyle, NSString;

@interface COSAppleIDLinker : NSObject <AAUIAccountRepairRemoteUIDelegate> {

	ACAccountStore* _accountStore;
	ACAccount* _account;
	AAUIAccountRepairRemoteUI* _secondFactorRemoteUI;
	id<COSAppleIDLinkerDelegate> _delegate;
	RUIStyle* _ruiStyle;

}

@property (assign,nonatomic,__weak) id<COSAppleIDLinkerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,retain) RUIStyle * ruiStyle;                                       //@synthesize ruiStyle=_ruiStyle - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithAccount:(id)arg1 accountStore:(id)arg2 password:(id)arg3 ;
-(void)_startSecondFactorVerificationUsingCookieHeaders:(id)arg1 ;
-(RUIStyle *)ruiStyle;
-(void)setRuiStyle:(RUIStyle *)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<COSAppleIDLinkerDelegate>)arg1 ;
-(id<COSAppleIDLinkerDelegate>)delegate;
-(void)start;
-(void)accountRepairRemoteUI:(id)arg1 account:(id)arg2 didFinishWithSuccess:(BOOL)arg3 ;
-(void)accountRepairRemoteUIWillAppear:(id)arg1 ;
-(void)accountRepairRemoteUIWillDismiss:(id)arg1 ;
-(void)accountRepairRemoteUI:(id)arg1 didReceiveObjectModel:(id)arg2 ;
-(void)accountRepairRemoteUI:(id)arg1 willPresentModalNavigationController:(id)arg2 ;
-(id)accountRepairRemoteUI:(id)arg1 headersForRequest:(id)arg2 ;
@end

