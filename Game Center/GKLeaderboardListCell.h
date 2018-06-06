/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKCollectionViewCell.h>

@class NSDictionary, UIImageView, GKLabel;

@interface GKLeaderboardListCell : GKCollectionViewCell {

	NSDictionary* _metricsOverrides;
	UIImageView* _iconView;
	GKLabel* _nameLabel;
	GKLabel* _ranksLabel;

}

@property (nonatomic,retain) NSDictionary * metricsOverrides;              //@synthesize metricsOverrides=_metricsOverrides - In the implementation block
@property (nonatomic,retain) UIImageView * iconView;                       //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) GKLabel * nameLabel;                          //@synthesize nameLabel=_nameLabel - In the implementation block
@property (nonatomic,retain) GKLabel * ranksLabel;                         //@synthesize ranksLabel=_ranksLabel - In the implementation block
+(void)initialize;
+(id)phoneMetrics;
+(id)padMetrics;
+(id)itemHeightList;
+(void)registerCellClassesWithCollectionView:(id)arg1 ;
+(double)defaultRowHeight;
-(void)_UIAppearance_setMetricsOverrides:(id)arg1 ;
-(GKLabel *)ranksLabel;
-(void)setRanksLabel:(GKLabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UIImageView *)iconView;
-(void)setIconView:(UIImageView *)arg1 ;
-(void)setNameLabel:(GKLabel *)arg1 ;
-(GKLabel *)nameLabel;
-(id)leaderboard;
-(void)didUpdateModel;
-(void)setMetricsOverrides:(NSDictionary *)arg1 ;
-(NSDictionary *)metricsOverrides;
@end

