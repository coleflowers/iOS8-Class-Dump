/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Maps/Maps-Structs.h>
#import <UIKit/UIViewController.h>
#import <Maps/MKMapViewDelegate.h>
#import <Maps/MKMapViewDelegatePrivate.h>
#import <UIKit/UIGestureRecognizerDelegate.h>

@protocol RAPAddressLocation;
@class MKMapView, UIBarButtonItem, MKUserTrackingBarButtonItem, UISegmentedControl, NSString, ReportAProblemLocationInstructionsView, RAPMapFeaturePickerPinAnnotation, UILongPressGestureRecognizer, VKLabelMarker, RAPReportContext;

@interface RAPMapFeaturePickerViewController : UIViewController <MKMapViewDelegate, MKMapViewDelegatePrivate, UIGestureRecognizerDelegate> {

	long long _kind;
	SCD_Struct_RA1 _rect;
	MKMapView* _mapView;
	/*^block*/id _selection;
	UIBarButtonItem* _commitBarItem;
	UIBarButtonItem* _cancelBarItem;
	/*^block*/id _commit;
	/*^block*/id _cancel;
	MKUserTrackingBarButtonItem* _trackingItem;
	UISegmentedControl* _mapModeControl;
	NSString* _prompt;
	ReportAProblemLocationInstructionsView* _instructionsView;
	RAPMapFeaturePickerPinAnnotation* _annotation;
	BOOL _creatingMapViewReportContext;
	UILongPressGestureRecognizer* _dropPinGestureRecognizer;
	BOOL _shouldDropPinWhenAdded;
	VKLabelMarker* _selectedLabelMarker;
	id<RAPAddressLocation> _selectedAddressLocation;
	RAPReportContext* _mapViewReportContext;
	SCD_Struct_RA0 _selectedCoordinate;
	SCD_Struct_RA1 _selectedMapRect;

}

@property (nonatomic,readonly) VKLabelMarker * selectedLabelMarker;                         //@synthesize selectedLabelMarker=_selectedLabelMarker - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RA0 selectedCoordinate;                           //@synthesize selectedCoordinate=_selectedCoordinate - In the implementation block
@property (nonatomic,readonly) SCD_Struct_RA1 selectedMapRect;                              //@synthesize selectedMapRect=_selectedMapRect - In the implementation block
@property (nonatomic,readonly) id<RAPAddressLocation> selectedAddressLocation;              //@synthesize selectedAddressLocation=_selectedAddressLocation - In the implementation block
@property (nonatomic,readonly) RAPReportContext * mapViewReportContext;                     //@synthesize mapViewReportContext=_mapViewReportContext - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initForPickingFeatureOfKind:(long long)arg1 withPrompt:(id)arg2 inMapRect:(SCD_Struct_RA1)arg3 selection:(/*^block*/id)arg4 ;
-(SCD_Struct_RA1)selectedMapRect;
-(RAPReportContext *)mapViewReportContext;
-(void)setHandlerBlocksForUserCommittedSelection:(/*^block*/id)arg1 cancelled:(/*^block*/id)arg2 ;
-(SCD_Struct_RA0)selectedCoordinate;
-(id<RAPAddressLocation>)selectedAddressLocation;
-(void)_updateCommitBarItem;
-(BOOL)_kindAllowsChangingMode;
-(void)_dropPin:(id)arg1 ;
-(void)_selectionDidChange;
-(BOOL)_annotationShowsCalloutForCurrentKind;
-(void)_annotationCoordinateDidChange:(id)arg1 ;
-(void)_commit;
-(BOOL)mapView:(id)arg1 shouldSelectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didSelectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 didDeselectLabelMarker:(id)arg2 ;
-(void)mapView:(id)arg1 regionDidChangeAnimated:(BOOL)arg2 ;
-(id)mapView:(id)arg1 viewForAnnotation:(id)arg2 ;
-(BOOL)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2 ;
-(void)viewDidLayoutSubviews;
-(void)viewWillAppear:(BOOL)arg1 ;
-(void)viewDidLoad;
-(void)viewWillDisappear:(BOOL)arg1 ;
-(void)_cancel;
-(VKLabelMarker *)selectedLabelMarker;
@end

