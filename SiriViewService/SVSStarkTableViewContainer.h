/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:46:57 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/SiriViewService.app/SiriViewService
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SiriViewService/SiriViewService-Structs.h>
#import <UIKit/UIView.h>

@class UIView, SVSStarkTableViewTitleView;

@interface SVSStarkTableViewContainer : UIView {

	BOOL _fullScreen;
	UIView* _tableViewContainer;
	SVSStarkTableViewTitleView* _titleView;

}

@property (getter=_tableViewContainer,nonatomic,retain) UIView * tableViewContainer;                   //@synthesize tableViewContainer=_tableViewContainer - In the implementation block
@property (getter=_titleView,nonatomic,retain) SVSStarkTableViewTitleView * titleView;                 //@synthesize titleView=_titleView - In the implementation block
@property (assign,setter=_setFullScreen:,getter=_isFullScreen,nonatomic) BOOL fullScreen;              //@synthesize fullScreen=_fullScreen - In the implementation block
-(id)_tableViewContainer;
-(BOOL)_isFullScreen;
-(void)setTableViewContainer:(UIView *)arg1 ;
-(void)_setFullScreen:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)setTitleView:(SVSStarkTableViewTitleView *)arg1 ;
-(id)_titleView;
@end
