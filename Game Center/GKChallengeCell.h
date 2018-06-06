/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKCollectionViewCell.h>

@class GKPlayerPhotoView, UILabel, GKContiguousContainerView, NSLayoutConstraint, GKChallenge;

@interface GKChallengeCell : GKCollectionViewCell {

	BOOL _padLeftMargin;
	GKPlayerPhotoView* _iconView;
	UILabel* _titleLabel;
	UILabel* _goalLabel;
	GKContiguousContainerView* _textContainerView;
	NSLayoutConstraint* _iconLeftConstraint;
	NSLayoutConstraint* _textLeftConstraint;

}

@property (nonatomic,retain) GKChallenge * challenge; 
@property (assign,nonatomic) BOOL padLeftMargin;                                         //@synthesize padLeftMargin=_padLeftMargin - In the implementation block
@property (nonatomic,retain) GKPlayerPhotoView * iconView;                               //@synthesize iconView=_iconView - In the implementation block
@property (nonatomic,retain) UILabel * titleLabel;                                       //@synthesize titleLabel=_titleLabel - In the implementation block
@property (nonatomic,retain) UILabel * goalLabel;                                        //@synthesize goalLabel=_goalLabel - In the implementation block
@property (nonatomic,retain) GKContiguousContainerView * textContainerView;              //@synthesize textContainerView=_textContainerView - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * iconLeftConstraint;                    //@synthesize iconLeftConstraint=_iconLeftConstraint - In the implementation block
@property (nonatomic,retain) NSLayoutConstraint * textLeftConstraint;                    //@synthesize textLeftConstraint=_textLeftConstraint - In the implementation block
+(id)itemHeightList;
+(double)defaultRowHeight;
-(void)setIconLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(NSLayoutConstraint *)iconLeftConstraint;
-(void)setTextLeftConstraint:(NSLayoutConstraint *)arg1 ;
-(void)setPadLeftMargin:(BOOL)arg1 ;
-(BOOL)padLeftMargin;
-(UILabel *)goalLabel;
-(void)setGoalLabel:(UILabel *)arg1 ;
-(NSLayoutConstraint *)textLeftConstraint;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(UILabel *)titleLabel;
-(void)prepareForReuse;
-(void)setTitleLabel:(UILabel *)arg1 ;
-(GKPlayerPhotoView *)iconView;
-(void)setIconView:(GKPlayerPhotoView *)arg1 ;
-(void)didUpdateModel;
-(CGRect)alignmentRectForText;
-(void)setRepresentedItem:(id)arg1 ;
-(BOOL)canRemoveItem;
-(void)establishConstraints;
-(void)setTextContainerView:(GKContiguousContainerView *)arg1 ;
-(GKContiguousContainerView *)textContainerView;
-(GKChallenge *)challenge;
-(void)setChallenge:(GKChallenge *)arg1 ;
@end

