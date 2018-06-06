/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <GameCenterPrivateUI/GKCollectionViewController.h>

@class GKGameRecord, NSArray;

@interface GKAchievementsViewController : GKCollectionViewController {

	GKGameRecord* _gameRecord;
	NSArray* _achievements;

}

@property (nonatomic,retain) GKGameRecord * gameRecord;              //@synthesize gameRecord=_gameRecord - In the implementation block
@property (nonatomic,retain) NSArray * achievements;                 //@synthesize achievements=_achievements - In the implementation block
-(id)initWithGameRecord:(id)arg1 ;
-(void)showAchievementDetails:(id)arg1 ;
-(void)dealloc;
-(id)title;
-(void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2 ;
-(NSArray *)achievements;
-(void)setAchievements:(NSArray *)arg1 ;
-(void)configureDataSource;
-(GKGameRecord *)gameRecord;
-(void)setGameRecord:(GKGameRecord *)arg1 ;
@end

