/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, NSArray, NSString, MKMapView, UITextView, GEORPProblemStatusResponse;

@interface RAPFixedProblemViewController : UIViewController {

	NSLayoutConstraint* _mapHeightConstraint;
	NSArray* _annotations;
	SCD_Struct_RA1 _mapRect;
	NSString* _headerText;
	NSString* _footerText;
	NSArray* _changes;
	MKMapView* _mapView;
	UITextView* _textView;
	GEORPProblemStatusResponse* _problemStatusResponse;

}

@property (nonatomic,retain) GEORPProblemStatusResponse * problemStatusResponse;              //@synthesize problemStatusResponse=_problemStatusResponse - In the implementation block
-(void)_updateMapViewIfLoaded;
-(void)_updateTextFieldIfLoaded;
-(void)_setAnnotations:(id)arg1 region:(SCD_Struct_RA1)arg2 ;
-(void)_setHeaderText:(id)arg1 changes:(id)arg2 footerText:(id)arg3 ;
-(void)setProblemStatusResponse:(GEORPProblemStatusResponse *)arg1 ;
-(GEORPProblemStatusResponse *)problemStatusResponse;
-(void)_contentSizeCategoryDidChange;
-(void)handleDone:(id)arg1 ;
-(void)dealloc;
-(id)init;
-(void)traitCollectionDidChange:(id)arg1 ;
-(void)viewDidLoad;
-(void)viewDidAppear:(BOOL)arg1 ;
-(void)updateViewConstraints;
@end

