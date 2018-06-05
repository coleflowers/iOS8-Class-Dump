/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 12:40:25 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobilePhone.app/MobilePhone
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MobilePhone/AVCaptureFileOutputRecordingDelegate.h>

@protocol PHAudioRecorderDelegate;
@class AVCaptureSession, AVCaptureMovieFileOutput, AVCaptureConnection, NSError, NSTimer, NSString;

@interface PHAudioRecorder : NSObject <AVCaptureFileOutputRecordingDelegate> {

	AVCaptureSession* _captureSession;
	AVCaptureMovieFileOutput* _captureFileOutput;
	AVCaptureConnection* _captureConnection;
	NSError* _buildCaptureSessionError;
	NSTimer* _updateTimer;
	BOOL _isRecording;
	BOOL _handlingStop;
	NSString* _outputFile;
	double _maxRecordedDuration;
	id<PHAudioRecorderDelegate> _audioRecorderDelegate;

}

@property (nonatomic,retain) NSString * outputFile;                                //@synthesize outputFile=_outputFile - In the implementation block
@property (assign,nonatomic) double maxRecordedDuration;                           //@synthesize maxRecordedDuration=_maxRecordedDuration - In the implementation block
@property (assign) id<PHAudioRecorderDelegate> audioRecorderDelegate;              //@synthesize audioRecorderDelegate=_audioRecorderDelegate - In the implementation block
@property (assign) BOOL isRecording;                                               //@synthesize isRecording=_isRecording - In the implementation block
@property (readonly) AVCaptureSession * captureSession; 
@property (readonly) AVCaptureMovieFileOutput * captureFileOutput; 
@property (readonly) AVCaptureConnection * captureConnection; 
@property (readonly) NSError * buildCaptureSessionError;                           //@synthesize buildCaptureSessionError=_buildCaptureSessionError - In the implementation block
@property (assign) BOOL handlingStop;                                              //@synthesize handlingStop=_handlingStop - In the implementation block
@property (nonatomic,retain) NSTimer * updateTimer;                                //@synthesize updateTimer=_updateTimer - In the implementation block
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
-(void)setAudioRecorderDelegate:(id<PHAudioRecorderDelegate>)arg1 ;
-(NSString *)outputFile;
-(void)setOutputFile:(NSString *)arg1 ;
-(BOOL)startWithError:(id*)arg1 ;
-(void)setIsRecording:(BOOL)arg1 ;
-(id<PHAudioRecorderDelegate>)audioRecorderDelegate;
-(AVCaptureMovieFileOutput *)captureFileOutput;
-(void)_updateRecordProgress:(id)arg1 ;
-(void)_stopWithError:(id)arg1 ;
-(void)_buildCaptureSessionAndOutputIfNecessary;
-(void)_captureSessionWasInterrupted:(id)arg1 ;
-(void)_captureSessionErrored:(id)arg1 ;
-(BOOL)handlingStop;
-(void)setHandlingStop:(BOOL)arg1 ;
-(AVCaptureConnection *)captureConnection;
-(NSError *)buildCaptureSessionError;
-(double)maxRecordedDuration;
-(BOOL)isRecording;
-(void)setMaxRecordedDuration:(double)arg1 ;
-(void)captureOutput:(id)arg1 didFinishRecordingToOutputFileAtURL:(id)arg2 fromConnections:(id)arg3 error:(id)arg4 ;
-(void)dealloc;
-(id)init;
-(NSTimer *)updateTimer;
-(void)setUpdateTimer:(NSTimer *)arg1 ;
-(void)stop;
-(AVCaptureSession *)captureSession;
@end
