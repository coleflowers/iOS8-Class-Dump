/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 11:54:54 AM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/CoreServices/SpringBoard.app/SpringBoard
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <SpringBoard/SpringBoard-Structs.h>
#import <UIKit/UIView.h>

@class _SBSearchBackdropView, SBWallpaperEffectView, UIView;

@interface SBSearchResultsBackdropView : UIView {

	_SBSearchBackdropView* _backdropView;
	SBWallpaperEffectView* _effectView;
	UIView* _tintView;

}
-(BOOL)useHighQualityGraphics;
-(void)transitionCompleted;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)prepareForTransition;
-(void)setTransitionProgress:(double)arg1 ;
@end

