/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:09 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileSafari/MobileSafari-Structs.h>
#import <UIKit/UIView.h>

@class ContinuousReadingItem, UIView, ContinuousReadingBannerView, UILabel;

@interface ContinuousReadingPreviewView : UIView {

	ContinuousReadingItem* _continuousReadingItem;
	UIView* _contentView;
	ContinuousReadingBannerView* _bannerView;
	UIView* _headerView;
	UIView* _contentBackgroundView;
	UILabel* _headerLabel;

}

@property (nonatomic,retain,readonly) ContinuousReadingItem * continuousReadingItem;              //@synthesize continuousReadingItem=_continuousReadingItem - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                                //@synthesize contentView=_contentView - In the implementation block
@property (nonatomic,readonly) double rubberBandingHeight; 
@property (nonatomic,readonly) double headerHeight; 
@property (nonatomic,retain) ContinuousReadingBannerView * bannerView;                            //@synthesize bannerView=_bannerView - In the implementation block
@property (nonatomic,retain) UIView * headerView;                                                 //@synthesize headerView=_headerView - In the implementation block
@property (nonatomic,retain) UIView * contentBackgroundView;                                      //@synthesize contentBackgroundView=_contentBackgroundView - In the implementation block
@property (nonatomic,retain) UILabel * headerLabel;                                               //@synthesize headerLabel=_headerLabel - In the implementation block
-(ContinuousReadingItem *)continuousReadingItem;
-(id)initWithContinuousReadingItem:(id)arg1 ;
-(double)rubberBandingHeight;
-(void)_layOutHeader;
-(void)_layOutContentView;
-(UIView *)contentBackgroundView;
-(void)setContentBackgroundView:(UIView *)arg1 ;
-(ContinuousReadingBannerView *)bannerView;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)headerView;
-(void)setHeaderView:(UIView *)arg1 ;
-(double)headerHeight;
-(void)setHeaderLabel:(UILabel *)arg1 ;
-(UILabel *)headerLabel;
-(void)setBannerView:(ContinuousReadingBannerView *)arg1 ;
@end

