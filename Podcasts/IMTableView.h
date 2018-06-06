/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UITableView.h>

@class IMQuickScroller;

@interface IMTableView : UITableView {

	long long _quickScrollerMinimumDisplayRowCount;
	IMQuickScroller* _quickScroller;

}

@property (assign,nonatomic) long long quickScrollerMinimumDisplayRowCount;              //@synthesize quickScrollerMinimumDisplayRowCount=_quickScrollerMinimumDisplayRowCount - In the implementation block
-(void)setQuickScrollerMinimumDisplayRowCount:(long long)arg1 ;
-(void)updateQuickScroller;
-(void)quickScroll:(id)arg1 ;
-(long long)totalRowCount;
-(long long)quickScrollerMinimumDisplayRowCount;
-(id)quickScroller;
-(BOOL)hasQuickScroller;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(id)hitTest:(CGPoint)arg1 withEvent:(id)arg2 ;
-(void)reloadData;
-(void)layoutSubviews;
-(void)setContentOffset:(CGPoint)arg1 ;
-(void)setEditing:(BOOL)arg1 animated:(BOOL)arg2 ;
-(id)initWithFrame:(CGRect)arg1 style:(long long)arg2 ;
-(void)initCommon;
@end
