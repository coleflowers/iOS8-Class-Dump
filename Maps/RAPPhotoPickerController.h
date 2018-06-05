/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:24 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIImagePickerControllerDelegate.h>

@class NSMapTable, AdaptivePresenter, ALAssetsLibrary, UIViewController, UIImage, CLLocation, NSString;

@interface RAPPhotoPickerController : NSObject <UINavigationControllerDelegate, UIImagePickerControllerDelegate> {

	NSMapTable* _observers;
	AdaptivePresenter* _imagePickerPresenter;
	ALAssetsLibrary* _assetsLibrary;
	BOOL _picking;
	UIViewController* _presentingViewController;
	/*^block*/id _positioningBlock;
	UIImage* _photo;
	CLLocation* _geotaggedLocation;

}

@property (nonatomic,retain) UIViewController * presentingViewController;              //@synthesize presentingViewController=_presentingViewController - In the implementation block
@property (nonatomic,copy) id positioningBlock;                                        //@synthesize positioningBlock=_positioningBlock - In the implementation block
@property (nonatomic,readonly) UIImage * photo;                                        //@synthesize photo=_photo - In the implementation block
@property (nonatomic,readonly) CLLocation * geotaggedLocation;                         //@synthesize geotaggedLocation=_geotaggedLocation - In the implementation block
@property (getter=isPicking,nonatomic,readonly) BOOL picking;                          //@synthesize picking=_picking - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(BOOL)shouldShowImagePickingUI;
-(void)addObserver:(id)arg1 changeHandler:(/*^block*/id)arg2 ;
-(void)_invokeChangeHandlers;
-(BOOL)isPicking;
-(void)setPositioningBlock:(id)arg1 ;
-(void)startPicking;
-(id)positioningBlock;
-(void)_deletePhoto;
-(CLLocation *)geotaggedLocation;
-(UIImage *)photo;
-(UIViewController *)presentingViewController;
-(void)removeObserver:(id)arg1 ;
-(void)setPresentingViewController:(UIViewController *)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
@end

