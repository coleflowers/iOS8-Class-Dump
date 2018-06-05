/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:56 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <SpringBoard/SBCollectionViewCell.h>
#import <SpringBoard/SBUIBannerView.h>

@class SBBannerContextView, UIView, NSString;

@interface SBStarkBannerCell : SBCollectionViewCell <SBUIBannerView> {

	SBBannerContextView* _contextView;
	UIView* _darkeningOverlayView;

}

@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)bannerContext;
-(void)noteWillAppear;
-(void)noteDidAppear;
-(void)noteWillDismissWithReason:(int)arg1 ;
-(BOOL)shouldBorrowScreen;
-(void)setBannerContext:(id)arg1 ;
-(void)noteDidDismiss;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)prepareForReuse;
@end

