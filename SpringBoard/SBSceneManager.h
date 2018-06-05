/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/FBSceneManagerObserver.h>

@protocol SBSceneManagerDelegate;
@class FBSceneManager, SBSceneLayoutManager, FBSDisplay, BSCopyingCacheSet, NSCountedSet, NSMutableSet, NSString;

@interface SBSceneManager : NSObject <FBSceneManagerObserver> {

	FBSceneManager* _sceneManager;
	SBSceneLayoutManager* _layoutManager;
	FBSDisplay* _display;
	id<SBSceneManagerDelegate> _delegate;
	BSCopyingCacheSet* _allScenes;
	BSCopyingCacheSet* _daemonScenes;
	BSCopyingCacheSet* _applicationScenes;
	BSCopyingCacheSet* _foregroundApplicationScenes;
	BSCopyingCacheSet* _reportedForegroundApplicationScenes;
	BSCopyingCacheSet* _externalApplicationScenes;
	BSCopyingCacheSet* _externalForegroundApplicationScenes;
	BSCopyingCacheSet* _reportedExternalForegroundApplicationScenes;
	NSCountedSet* _assertedBackgroundScenes;
	NSMutableSet* _externalForegroundApplicationHostReasons;
	SBSceneLayoutManager* layoutManager;

}

@property (nonatomic,retain,readonly) FBSDisplay * display;                              //@synthesize display=_display - In the implementation block
@property (nonatomic,retain,readonly) SBSceneLayoutManager * layoutManager;              //@synthesize layoutManager=_layoutManager - In the implementation block
@property (assign,nonatomic) id<SBSceneManagerDelegate> delegate;                        //@synthesize delegate=_delegate - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(Class)_layoutManagerClass;
-(id)externalForegroundApplicationScenes;
-(BOOL)isHostingExternalForegroundApplicationScenes;
-(id)allScenes;
-(id)applicationScenes;
-(id)foregroundApplicationScenes;
-(id)externalApplicationScenes;
-(id)daemonScenes;
-(id)assertBackgroundedStatusForScenes:(id)arg1 ;
-(void)setShouldHostExternalForegroundApplicationScenes:(BOOL)arg1 forReason:(id)arg2 ;
-(void)destroyAllScenes;
-(BOOL)_isStarkActivelyConnected;
-(void)dealloc;
-(void)setDelegate:(id<SBSceneManagerDelegate>)arg1 ;
-(NSString *)description;
-(id<SBSceneManagerDelegate>)delegate;
-(FBSDisplay *)display;
-(SBSceneLayoutManager *)layoutManager;
-(id)initWithDisplay:(id)arg1 ;
-(void)sceneManager:(id)arg1 didCreateScene:(id)arg2 withClient:(id)arg3 ;
-(void)sceneManager:(id)arg1 willUpdateScene:(id)arg2 withSettings:(id)arg3 transitionContext:(id)arg4 ;
-(void)sceneManager:(id)arg1 willCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 didCommitUpdateForScene:(id)arg2 transactionID:(unsigned long long)arg3 ;
-(void)sceneManager:(id)arg1 willDestroyScene:(id)arg2 ;
-(void)sceneManager:(id)arg1 didDestroyScene:(id)arg2 ;
@end

