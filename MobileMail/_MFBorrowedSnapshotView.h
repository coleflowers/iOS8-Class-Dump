/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UIView.h>

@class _MFActorSnapshotView, UIView;

@interface _MFBorrowedSnapshotView : UIView {

	_MFActorSnapshotView* _actorSnapshotView;
	UIView* _dimmingView;
	UIView* _borderView;
	UIView* _contentView;

}

@property (nonatomic,retain) _MFActorSnapshotView * actorSnapshotView;              //@synthesize actorSnapshotView=_actorSnapshotView - In the implementation block
@property (nonatomic,retain) UIView * dimmingView;                                  //@synthesize dimmingView=_dimmingView - In the implementation block
@property (nonatomic,retain) UIView * borderView;                                   //@synthesize borderView=_borderView - In the implementation block
@property (nonatomic,retain) UIView * contentView;                                  //@synthesize contentView=_contentView - In the implementation block
-(void)borrowContentView:(id)arg1 ;
-(void)borrowBorderView:(id)arg1 ;
-(void)borrowActorSnapshotView:(id)arg1 ;
-(void)borrowDimmingView:(id)arg1 ;
-(UIView *)borderView;
-(_MFActorSnapshotView *)actorSnapshotView;
-(void)setActorSnapshotView:(_MFActorSnapshotView *)arg1 ;
-(void)setBorderView:(UIView *)arg1 ;
-(void)dealloc;
-(UIView *)contentView;
-(void)setContentView:(UIView *)arg1 ;
-(UIView *)dimmingView;
-(void)setDimmingView:(UIView *)arg1 ;
@end

