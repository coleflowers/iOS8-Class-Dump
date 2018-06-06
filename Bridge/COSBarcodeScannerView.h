/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>
#import <Bridge/AVCaptureMetadataOutputObjectsDelegate.h>

@protocol OS_dispatch_queue, PKCaptureDelegate;
@class AVCaptureSession, AVCaptureDeviceInput, NSObject, AVCaptureVideoPreviewLayer, NSString;

@interface COSBarcodeScannerView : UIView <AVCaptureMetadataOutputObjectsDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureDeviceInput* _deviceInput;
	NSObject*<OS_dispatch_queue> _metadataQueue;
	AVCaptureVideoPreviewLayer* _previewLayer;
	BOOL _canUseCamera;
	id<PKCaptureDelegate> _delegate;

}

@property (nonatomic,readonly) BOOL canUseCamera;                                      //@synthesize canUseCamera=_canUseCamera - In the implementation block
@property (nonatomic,readonly) BOOL isRunning; 
@property (assign,nonatomic) id<PKCaptureDelegate> delegate;                           //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) AVCaptureVideoPreviewLayer * previewLayer;              //@synthesize previewLayer=_previewLayer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)handleRuntimeError:(id)arg1 ;
-(BOOL)canUseCamera;
-(void)startRunning;
-(void)stopRunning;
-(void)_changeCameraConfiguration;
-(void)setupCameraSession;
-(void)autoExposeAtPoint:(CGPoint)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<PKCaptureDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<PKCaptureDelegate>)delegate;
-(void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void*)arg4 ;
-(BOOL)isRunning;
-(AVCaptureVideoPreviewLayer *)previewLayer;
-(void)autoFocusAtPoint:(CGPoint)arg1 ;
-(id)initWithDelegate:(id)arg1 ;
@end

