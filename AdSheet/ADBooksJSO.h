/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, June 6, 2018 at 7:04:48 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/AdSheet.app/AdSheet
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <AdSheet/ADJavaScriptObject.h>
#import <AdSheet/ADBooksJSO_Bindings.h>

@class NSMutableDictionary, NSString;

@interface ADBooksJSO : ADJavaScriptObject <ADBooksJSO_Bindings> {

	BOOL _processingRequest;
	NSMutableDictionary* _metadata;
	NSString* _pdfPath;

}

@property (nonatomic,retain) NSMutableDictionary * metadata;              //@synthesize metadata=_metadata - In the implementation block
@property (nonatomic,copy) NSString * pdfPath;                            //@synthesize pdfPath=_pdfPath - In the implementation block
@property (assign,nonatomic) BOOL processingRequest;                      //@synthesize processingRequest=_processingRequest - In the implementation block
+(void)initializeInContext:(id)arg1 ;
-(id)initWithDelegate:(id)arg1 impressionController:(id)arg2 ;
-(void)setPdfPath:(NSString *)arg1 ;
-(void)setProcessingRequest:(BOOL)arg1 ;
-(BOOL)processingRequest;
-(void)_deliverResult:(long long)arg1 ;
-(void)_previewPDFFile;
-(void)_savePDFData:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(void)_requestPDFSave:(id)arg1 withResult:(/*^block*/id)arg2 ;
-(void)addPDF:(id)arg1 replyTo:(id)arg2 ;
-(NSString *)pdfPath;
-(void)dealloc;
-(void)setMetadata:(NSMutableDictionary *)arg1 ;
-(NSMutableDictionary *)metadata;
@end

