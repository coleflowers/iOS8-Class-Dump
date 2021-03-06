/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:57:04 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Bridge.app/Bridge
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Bridge/Bridge-Structs.h>
#import <UIKit/UIView.h>

@protocol OS_dispatch_queue, COSMagicCodeScannerDelegate;
@class AVCaptureSession, AVCaptureDevice, AVCaptureVideoPreviewLayer, NSObject, UITapGestureRecognizer, CALayer;

@interface COSMagicCodeScanner : UIView {

	AVCaptureSession* _session;
	AVCaptureDevice* _device;
	AVCaptureVideoPreviewLayer* _previewLayer;
	NSObject*<OS_dispatch_queue> _queue;
	HCImagePerspectiveReader* _reader;
	unsigned long long _readerUVWidth;
	unsigned long long _readerUVHeight;
	unsigned long long _readerUVBytesPerRow;
	double _watermark;
	CFArrayRef _pixelBufferPyramidArray;
	OpaqueVTPixelTransferSessionRef _pixelTransferSession;
	CGRect _interestRect;
	BOOL _canUseCamera;
	BOOL _isScanningForCode;
	id<COSMagicCodeScannerDelegate> _delegate;
	UITapGestureRecognizer* _debugUIRecognizer;
	CALayer* _progressBGLayer;
	CALayer* _progressLayer;

}

@property (assign,nonatomic,__weak) id<COSMagicCodeScannerDelegate> delegate;              //@synthesize delegate=_delegate - In the implementation block
@property (nonatomic,readonly) BOOL canUseCamera;                                          //@synthesize canUseCamera=_canUseCamera - In the implementation block
@property (assign,nonatomic) BOOL isScanningForCode;                                       //@synthesize isScanningForCode=_isScanningForCode - In the implementation block
@property (nonatomic,retain) UITapGestureRecognizer * debugUIRecognizer;                   //@synthesize debugUIRecognizer=_debugUIRecognizer - In the implementation block
@property (nonatomic,retain) CALayer * progressBGLayer;                                    //@synthesize progressBGLayer=_progressBGLayer - In the implementation block
@property (nonatomic,retain) CALayer * progressLayer;                                      //@synthesize progressLayer=_progressLayer - In the implementation block
-(void)toggleDebugUI:(id)arg1 ;
-(void)handleRuntimeError:(id)arg1 ;
-(BOOL)canUseCamera;
-(BOOL)isScanningForCode;
-(void)setIsScanningForCode:(BOOL)arg1 ;
-(UITapGestureRecognizer *)debugUIRecognizer;
-(void)setDebugUIRecognizer:(UITapGestureRecognizer *)arg1 ;
-(CALayer *)progressBGLayer;
-(void)setProgressBGLayer:(CALayer *)arg1 ;
-(CALayer *)progressLayer;
-(void)setProgressLayer:(CALayer *)arg1 ;
-(void)captureOutput:(id)arg1 didOutputSampleBuffer:(opaqueCMSampleBufferRef)arg2 fromConnection:(id)arg3 ;
-(void)startRunning;
-(void)stopRunning;
-(void)_changeCameraConfiguration;
-(void)setupCameraSession;
-(id)initWithFrame:(CGRect)arg1 ;
-(void)dealloc;
-(void)setDelegate:(id<COSMagicCodeScannerDelegate>)arg1 ;
-(void)layoutSubviews;
-(id<COSMagicCodeScannerDelegate>)delegate;
@end

