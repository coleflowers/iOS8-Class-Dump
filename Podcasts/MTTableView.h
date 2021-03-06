/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UITableView.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@class NSIndexPath, UIView, UIColor, NSString;

@interface MTTableView : UITableView <UIGestureRecognizerDelegate> {

	NSIndexPath* _presentationPath;
	UIView* _bottomFillView;
	BOOL _pinsHeaderToTop;
	BOOL _adjustContentOffsetForRefreshControlAsNeeded;
	BOOL _disableRefreshControlWhileEditing;
	UIColor* _bottomFillColor;
	UIView* _pinnableHeaderView;
	UIView* _hiddenHeaderView;
	UIView* _hiddenFooterView;
	UIView* _overlayView;

}

@property (assign,nonatomic) BOOL pinsHeaderToTop;                                           //@synthesize pinsHeaderToTop=_pinsHeaderToTop - In the implementation block
@property (assign,nonatomic) BOOL adjustContentOffsetForRefreshControlAsNeeded;              //@synthesize adjustContentOffsetForRefreshControlAsNeeded=_adjustContentOffsetForRefreshControlAsNeeded - In the implementation block
@property (assign,nonatomic) id<MTTableViewDataSource> dataSource; 
@property (nonatomic,retain) UIColor * bottomFillColor;                                      //@synthesize bottomFillColor=_bottomFillColor - In the implementation block
@property (nonatomic,retain) UIView * hiddenHeaderView;                                      //@synthesize hiddenHeaderView=_hiddenHeaderView - In the implementation block
@property (nonatomic,retain) UIView * hiddenFooterView;                                      //@synthesize hiddenFooterView=_hiddenFooterView - In the implementation block
@property (nonatomic,retain) UIView * pinnableHeaderView;                                    //@synthesize pinnableHeaderView=_pinnableHeaderView - In the implementation block
@property (nonatomic,retain) UIView * overlayView;                                           //@synthesize overlayView=_overlayView - In the implementation block
@property (assign,nonatomic) BOOL disableRefreshControlWhileEditing;                         //@synthesize disableRefreshControlWhileEditing=_disableRefreshControlWhileEditing - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAdjustContentOffsetForRefreshControlAsNeeded:(BOOL)arg1 ;
-(void)setPinnableHeaderView:(UIView *)arg1 ;
-(UIEdgeInsets)insetsFromRefreshControl;
-(void)setDisableRefreshControlWhileEditing:(BOOL)arg1 ;
-(BOOL)adjustContentOffsetForRefreshControlAsNeeded;
-(void)disablePullToRefresh;
-(void)enablePullToRefresh;
-(BOOL)disableRefreshControlWhileEditing;
-(void)setPinsHeaderToTop:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)setPinsHeaderToTop:(BOOL)arg1 ;
-(BOOL)pinsHeaderToTop;
-(void)updateRefreshControlEnabledState;
-(void)setHiddenHeaderView:(UIView *)arg1 ;
-(void)setHiddenFooterView:(UIView *)arg1 ;
-(void)setBottomFillColor:(UIColor *)arg1 ;
-(UIColor *)bottomFillColor;
-(UIView *)pinnableHeaderView;
-(UIView *)hiddenHeaderView;
-(UIView *)hiddenFooterView;
-(UIView *)overlayView;
-(void)layoutSubviews;
-(void)encodeRestorableStateWithCoder:(id)arg1 ;
-(void)decodeRestorableStateWithCoder:(id)arg1 ;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setContentSize:(CGSize)arg1 ;
-(void)setContentInset:(UIEdgeInsets)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(void)_setRefreshControl:(id)arg1 ;
-(void)setTableFooterView:(id)arg1 ;
-(void)setOverlayView:(UIView *)arg1 ;
@end

