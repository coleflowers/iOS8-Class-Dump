/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SBStarkWorkspaceTransaction.h>
#import <SpringBoard/FBSynchronizedTransactionDelegate.h>
#import <SpringBoard/SBMainScreenApplicationSceneTransactionObserver.h>

@class SBSceneBackgroundedStatusAssertion, SBSceneManager, SBApplication, NSString, NSSet, FBSDisplay;

@interface SBStarkToAppWorkspaceTransaction : SBStarkWorkspaceTransaction <FBSynchronizedTransactionDelegate, SBMainScreenApplicationSceneTransactionObserver> {

	SBSceneBackgroundedStatusAssertion* _scenesBackgroundedStatusAssertion;
	SBSceneManager* _sceneManager;
	SBApplication* _toApp;
	NSString* _reasonToPendClearingActivationSettings;
	NSSet* _scenesToBackground;
	BOOL _fromAssistant;
	FBSDisplay* _starkDisplay;

}

@property (nonatomic,readonly) SBApplication * toApp;               //@synthesize toApp=_toApp - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(SBApplication *)toApp;
-(BOOL)_shouldDisallowSuspension;
-(void)mainScreenApplicationsDidCommitSceneUpdates:(id)arg1 ;
-(void)mainScreenApplicationUpdateScenesTransactionCompleted:(id)arg1 ;
-(void)mainScreenApplicationSceneWillCommit:(id)arg1 ;
-(void)mainScreenApplicationSceneDidCommit:(id)arg1 ;
-(id)initWithMainScreenAlertManager:(id)arg1 starkScreenController:(id)arg2 to:(id)arg3 ;
-(void)_fixupSettingsAndCommit;
-(void)dealloc;
-(void)_didComplete;
-(void)_begin;
-(void)synchronizedTransactionReadyToCommit:(id)arg1 ;
-(void)synchronizedTransaction:(id)arg1 willCommitSynchronizedTransactions:(id)arg2 ;
-(void)synchronizedTransaction:(id)arg1 didCommitSynchronizedTransactions:(id)arg2 ;
@end

