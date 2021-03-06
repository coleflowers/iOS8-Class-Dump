/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 6:40:43 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Game Center.app/Game Center
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Game Center/Game Center-Structs.h>
#import <UIKit/UIImagePickerControllerDelegate.h>
#import <UIKit/UINavigationControllerDelegate.h>
#import <UIKit/UIPopoverControllerDelegate.h>
#import <UIKit/UIActionSheetDelegate.h>

@class UIViewController, UIView, UIPopoverController, UIImagePickerController, UIAlertController, NSString;

@interface GKPhotoPicker : NSObject <UIImagePickerControllerDelegate, UINavigationControllerDelegate, UIPopoverControllerDelegate, UIActionSheetDelegate> {

	BOOL _cancelled;
	UIViewController* _viewController;
	UIView* _view;
	UIPopoverController* _photoPopover;
	UIImagePickerController* _imagePicker;
	/*^block*/id _completionHandler;
	UIAlertController* _alertController;
	long long _chooseButtonIndex;
	long long _takeButtonIndex;
	long long _pasteButtonIndex;
	UIEdgeInsets _popoverInsets;

}

@property (nonatomic,retain) UIViewController * viewController;                  //@synthesize viewController=_viewController - In the implementation block
@property (nonatomic,retain) UIView * view;                                      //@synthesize view=_view - In the implementation block
@property (assign,nonatomic) UIEdgeInsets popoverInsets;                         //@synthesize popoverInsets=_popoverInsets - In the implementation block
@property (nonatomic,copy) id completionHandler;                                 //@synthesize completionHandler=_completionHandler - In the implementation block
@property (nonatomic,retain) UIPopoverController * photoPopover;                 //@synthesize photoPopover=_photoPopover - In the implementation block
@property (nonatomic,retain) UIAlertController * alertController;                //@synthesize alertController=_alertController - In the implementation block
@property (nonatomic,retain) UIImagePickerController * imagePicker;              //@synthesize imagePicker=_imagePicker - In the implementation block
@property (assign,nonatomic) BOOL cancelled;                                     //@synthesize cancelled=_cancelled - In the implementation block
@property (assign,nonatomic) long long chooseButtonIndex;                        //@synthesize chooseButtonIndex=_chooseButtonIndex - In the implementation block
@property (assign,nonatomic) long long takeButtonIndex;                          //@synthesize takeButtonIndex=_takeButtonIndex - In the implementation block
@property (assign,nonatomic) long long pasteButtonIndex;                         //@synthesize pasteButtonIndex=_pasteButtonIndex - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(id)initWithViewController:(id)arg1 photoView:(id)arg2 ;
-(void)setPopoverInsets:(UIEdgeInsets)arg1 ;
-(void)pick;
-(void)cancelAlertWithoutDelegateCallback;
-(void)dismissImagePickerAnimated:(BOOL)arg1 ;
-(void)presentImagePickerForSourceType:(long long)arg1 ;
-(void)_pick;
-(void)setImagePicker:(UIImagePickerController *)arg1 ;
-(void)setPhotoPopover:(UIPopoverController *)arg1 ;
-(void)showPopover;
-(id)editedImageFromImage:(id)arg1 cropRect:(CGRect)arg2 ;
-(UIEdgeInsets)popoverInsets;
-(UIPopoverController *)photoPopover;
-(long long)chooseButtonIndex;
-(void)setChooseButtonIndex:(long long)arg1 ;
-(long long)takeButtonIndex;
-(void)setTakeButtonIndex:(long long)arg1 ;
-(long long)pasteButtonIndex;
-(void)setPasteButtonIndex:(long long)arg1 ;
-(void)takePhoto;
-(void)choosePhoto;
-(UIImagePickerController *)imagePicker;
-(void)cancel;
-(void)dealloc;
-(UIView *)view;
-(void)setView:(UIView *)arg1 ;
-(id)completionHandler;
-(BOOL)cancelled;
-(void)setCancelled:(BOOL)arg1 ;
-(void)setViewController:(UIViewController *)arg1 ;
-(UIViewController *)viewController;
-(void)willRotateToInterfaceOrientation:(long long)arg1 duration:(double)arg2 ;
-(void)didRotateFromInterfaceOrientation:(long long)arg1 ;
-(void)popoverControllerDidDismissPopover:(id)arg1 ;
-(void)setAlertController:(UIAlertController *)arg1 ;
-(void)imagePickerControllerDidCancel:(id)arg1 ;
-(void)imagePickerController:(id)arg1 didFinishPickingMediaWithInfo:(id)arg2 ;
-(UIAlertController *)alertController;
-(void)setCompletionHandler:(id)arg1 ;
-(void)popoverController:(id)arg1 willRepositionPopoverToRect:(inout CGRect*)arg2 inView:(inout id*)arg3 ;
-(void)finish;
-(void)deletePhoto;
-(void)setPhoto:(id)arg1 ;
-(void)didEnterBackground;
@end

