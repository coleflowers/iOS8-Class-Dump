/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:35:58 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileMail.app/MobileMail
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobileMail/MobileMail-Structs.h>
#import <UIKit/UIView.h>

@protocol MessageFoldViewDelegate;
@class NSArray, UIView;

@interface MessageFoldView : UIView {

	id<MessageFoldViewDelegate> _delegate;
	NSArray* _foldViews;
	NSArray* _foldShadowViews;
	NSArray* _foldLineViews;
	UIView* _coveredView;
	CGRect _coveredRect;
	double _minHeight;
	unsigned long long _foldCount;
	int _foldContentsVisibility;
	BOOL _validCoveredSnapshots;

}

@property (assign,nonatomic) id<MessageFoldViewDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
-(id)initWithFrame:(CGRect)arg1 foldCount:(unsigned long long)arg2 minHeight:(double)arg3 ;
-(void)setMessageFoldContentsVisibility:(int)arg1 ;
-(void)invalidateFoldSnapshots;
-(void)updateFoldSnapshotsIfNecessary;
-(void)setCoveredRect:(CGRect)arg1 inView:(id)arg2 ;
-(void)setLastQuoteLevel:(unsigned long long)arg1 ;
-(BOOL)isUnfolded;
-(BOOL)isUnfolding;
-(void)_updateCoveredSnapshots;
-(void)dealloc;
-(void)setDelegate:(id<MessageFoldViewDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<MessageFoldViewDelegate>)delegate;
@end

