/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:39:49 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Podcasts.app/Podcasts
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Podcasts/Podcasts-Structs.h>
#import <UIKit/UIView.h>

@class CAShapeLayer;

@interface IMPieProgressView : UIView {

	BOOL _fills;
	int _direction;
	float _progress;
	CAShapeLayer* _fill;
	CAShapeLayer* _border;

}

@property (assign,nonatomic) BOOL fills;                         //@synthesize fills=_fills - In the implementation block
@property (assign,nonatomic) int direction;                      //@synthesize direction=_direction - In the implementation block
@property (assign,nonatomic) float progress;                     //@synthesize progress=_progress - In the implementation block
@property (nonatomic,retain) CAShapeLayer * fill;                //@synthesize fill=_fill - In the implementation block
@property (nonatomic,retain) CAShapeLayer * border;              //@synthesize border=_border - In the implementation block
-(void)updateFillPath;
-(void)setFills:(BOOL)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)setBounds:(CGRect)arg1 ;
-(CAShapeLayer *)fill;
-(void)setDirection:(int)arg1 ;
-(void)tintColorDidChange;
-(void)setProgress:(float)arg1 ;
-(int)direction;
-(void)setProgress:(float)arg1 animated:(BOOL)arg2 ;
-(float)progress;
-(id)shapeLayer;
-(void)setFill:(CAShapeLayer *)arg1 ;
-(BOOL)fills;
-(CAShapeLayer *)border;
-(void)setBorder:(CAShapeLayer *)arg1 ;
@end

