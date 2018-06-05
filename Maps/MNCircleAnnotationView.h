/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKAnnotationView.h>

@class CALayer;

@interface MNCircleAnnotationView : MKAnnotationView {

	CALayer* _circleLayer;
	double _radius;

}

@property (assign,nonatomic) double radius;              //@synthesize radius=_radius - In the implementation block
-(void)setColorRed:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4 ;
-(void)_setMapPitchRadians:(double)arg1 ;
-(double)radius;
-(void)setRadius:(double)arg1 ;
-(id)initWithAnnotation:(id)arg1 reuseIdentifier:(id)arg2 ;
@end

