/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/GKPlayerProfileCollectionViewController.h>

@class GKPlayer;

@interface GKFriendRequestProfileViewController : GKPlayerProfileCollectionViewController {

	BOOL _processed;
	BOOL _didFloatInBubbles;

}

@property (nonatomic,retain) GKPlayer * player; 
@property (assign,nonatomic) BOOL processed;                      //@synthesize processed=_processed - In the implementation block
@property (assign,nonatomic) BOOL didFloatInBubbles;              //@synthesize didFloatInBubbles=_didFloatInBubbles - In the implementation block
+(Class)headerViewClass;
-(void)floatInBubbles;
-(void)animateOutBubbleWithFocus:(long long)arg1 completion:(/*^block*/id)arg2 ;
-(BOOL)didFloatInBubbles;
-(void)setDidFloatInBubbles:(BOOL)arg1 ;
-(void)setProcessed:(BOOL)arg1 ;
-(void)acceptedFriendRequest:(BOOL)arg1 withError:(id)arg2 ;
-(void)acceptFriendRequest;
-(void)ignoreFriendRequest;
-(BOOL)processed;
-(id)init;
-(void)loadView;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)configureDataSource;
-(void)willAnimateAppearingWithBubbleFlow;
@end

