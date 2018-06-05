/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UICollectionViewCell.h>

@class UIView, UIImageView, UILongPressGestureRecognizer, NSIndexPath;

@interface StarkOverlayBackdropView : UICollectionViewCell {

	id _target;
	SEL _action;
	UIView* _container;
	UIImageView* _focusRing;
	UILongPressGestureRecognizer* _tapRecognizer;
	UILongPressGestureRecognizer* _buttonRecognizer;
	BOOL _focusable;
	NSIndexPath* _currentIndexPath;

}

@property (assign,nonatomic) BOOL focusable;                            //@synthesize focusable=_focusable - In the implementation block
@property (nonatomic,copy) NSIndexPath * currentIndexPath;              //@synthesize currentIndexPath=_currentIndexPath - In the implementation block
+(id)focusRingImage;
-(void)handlePress:(id)arg1 ;
-(void)setFocusable:(BOOL)arg1 ;
-(void)setupFocusRingIfNecesary;
-(BOOL)focusable;
-(NSIndexPath *)currentIndexPath;
-(void)setCurrentIndexPath:(NSIndexPath *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)layoutSubviews;
-(void)_focusStateDidChange;
-(BOOL)_isFocusableElement;
-(void)prepareForReuse;
-(void)setTarget:(id)arg1 action:(SEL)arg2 ;
-(void)applyLayoutAttributes:(id)arg1 ;
@end

