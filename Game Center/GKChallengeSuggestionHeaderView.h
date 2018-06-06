/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <GameCenterPrivateUI/GKHeaderWithUnderlineView.h>

@class GKLabel, GKPlayer;

@interface GKChallengeSuggestionHeaderView : GKHeaderWithUnderlineView {

	GKLabel* _explanatoryLabel;
	GKPlayer* _friend;

}

@property (nonatomic,retain) GKLabel * explanatoryLabel;              //@synthesize explanatoryLabel=_explanatoryLabel - In the implementation block
@property (nonatomic,retain) GKPlayer * friend;                       //@synthesize friend=_friend - In the implementation block
+(id)phoneMetrics;
+(id)padMetrics;
-(GKLabel *)explanatoryLabel;
-(void)setExplanatoryLabel:(GKLabel *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(GKPlayer *)friend;
-(void)setFriend:(GKPlayer *)arg1 ;
@end
