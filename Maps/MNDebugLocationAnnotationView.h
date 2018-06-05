/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:23 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MapKit/MKAnnotationView.h>

@class MNDebugLocationAnnotation, UIView, UIImageView;

@interface MNDebugLocationAnnotationView : MKAnnotationView {

	MNDebugLocationAnnotation* _debugLocationAnnotation;
	UIView* _circleView;
	UIView* _outerCircleView;
	UIImageView* _courseImageView;

}

@property (nonatomic,retain) MNDebugLocationAnnotation * debugLocationAnnotation;              //@synthesize debugLocationAnnotation=_debugLocationAnnotation - In the implementation block
-(id)initWithAnnotation:(id)arg1 debugLocationAnnotation:(id)arg2 reuseIdentifier:(id)arg3 ;
-(void)setDebugLocationAnnotation:(MNDebugLocationAnnotation *)arg1 ;
-(void)_updateFillColor;
-(void)_updateAccuracy;
-(void)_updateCourse;
-(MNDebugLocationAnnotation *)debugLocationAnnotation;
-(void)_setMapRotationRadians:(double)arg1 ;
-(void)_setMapPitchRadians:(double)arg1 ;
@end

