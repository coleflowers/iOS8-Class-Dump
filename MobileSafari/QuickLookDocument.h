/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 10:50:08 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/MobileSafari.app/MobileSafari
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class LSDocumentProxy, NSString, NSURL;

@interface QuickLookDocument : NSObject {

	LSDocumentProxy* _documentProxy;
	BOOL _needsQuickLookDocumentView;
	NSString* _savedPath;
	NSString* _savedPathWithProperExtension;
	BOOL _shouldDeleteSavedPath;
	BOOL _shouldDeleteSavedPathWithProperExtension;
	NSString* _fileName;
	NSString* _mimeType;
	NSString* _uti;
	NSURL* _sourceURL;

}

@property (nonatomic,retain) LSDocumentProxy * documentProxy;                    //@synthesize documentProxy=_documentProxy - In the implementation block
@property (nonatomic,readonly) BOOL needsQuickLookDocumentView;                  //@synthesize needsQuickLookDocumentView=_needsQuickLookDocumentView - In the implementation block
@property (nonatomic,copy) NSString * savedPath;                                 //@synthesize savedPath=_savedPath - In the implementation block
@property (nonatomic,copy) NSString * savedPathWithProperExtension;              //@synthesize savedPathWithProperExtension=_savedPathWithProperExtension - In the implementation block
@property (nonatomic,copy) NSString * fileName;                                  //@synthesize fileName=_fileName - In the implementation block
@property (nonatomic,copy) NSString * mimeType;                                  //@synthesize mimeType=_mimeType - In the implementation block
@property (nonatomic,copy) NSString * uti;                                       //@synthesize uti=_uti - In the implementation block
@property (nonatomic,retain) NSURL * sourceURL;                                  //@synthesize sourceURL=_sourceURL - In the implementation block
-(BOOL)needsQuickLookDocumentView;
-(void)addQuickLookPrintSettingsToPrintInfo:(id)arg1 ;
-(NSString *)savedPath;
-(void)setSavedPath:(id)arg1 shouldDelete:(BOOL)arg2 ;
-(NSString *)savedPathWithProperExtension;
-(LSDocumentProxy *)documentProxy;
-(void)_deleteSavedPathIfNecessary;
-(void)_deleteSavedPathWithProperExtensionIfNecessary;
-(void)setDocumentProxy:(LSDocumentProxy *)arg1 ;
-(void)setSavedPathWithProperExtension:(id)arg1 shouldDelete:(BOOL)arg2 ;
-(void)setSavedPath:(NSString *)arg1 ;
-(void)setSavedPathWithProperExtension:(NSString *)arg1 ;
-(id)initWithFileName:(id)arg1 mimeType:(id)arg2 uti:(id)arg3 needsQuickLookDocumentView:(BOOL)arg4 ;
-(NSURL *)sourceURL;
-(void)setSourceURL:(NSURL *)arg1 ;
-(NSString *)fileName;
-(void)setUti:(NSString *)arg1 ;
-(NSString *)uti;
-(void)dealloc;
-(NSString *)mimeType;
-(void)setMimeType:(NSString *)arg1 ;
-(void)setFileName:(NSString *)arg1 ;
@end

