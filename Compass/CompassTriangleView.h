/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 1:27:44 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Compass.app/Compass
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Compass/Compass-Structs.h>
#import <CompassUI/CompassRotatingView.h>

@class UIView;

@interface CompassTriangleView : CompassRotatingView {

	UIView* _triangleView;
	double _triangleRadius;

}

@property (assign,nonatomic) double triangleRadius;              //@synthesize triangleRadius=_triangleRadius - In the implementation block
-(void)setTriangleRadius:(double)arg1 ;
-(id)triangleView;
-(double)triangleRadius;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)layoutSubviews;
-(void)setCompassHeading:(double)arg1 ;
@end
