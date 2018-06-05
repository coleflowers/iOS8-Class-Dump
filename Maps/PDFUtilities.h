/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, June 5, 2018 at 6:38:22 PM China Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /private/var/db/stash/_.8k0vmU/Applications/Maps.app/Maps
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


#import <Maps/Maps-Structs.h>
@class NSMutableDictionary;

@interface PDFUtilities : NSObject {

	CGPDFDocumentRef _northPin;
	CGPDFDocumentRef _eastPin;
	CGPDFDocumentRef _southPin;
	CGPDFDocumentRef _westPin;
	CGPDFDocumentRef _greenPin;
	CGPDFDocumentRef _redPin;
	CGPDFDocumentRef _searchPin;
	CGPDFDocumentRef _badgeSearch;
	CGPDFDocumentRef _badgeBus;
	CGPDFDocumentRef _badgeCar;
	CGPDFDocumentRef _badgeWalk;
	NSMutableDictionary* _imageCache;

}
+(id)sharedInstance;
-(void)purgeAssets;
-(void)renderDocumentForType:(int)arg1 inRect:(CGRect)arg2 ;
-(CGPDFDocumentRef)newDocumentWithName:(CFStringRef)arg1 ;
-(CGAffineTransform)drawingTransformForPage:(CGPDFPageRef)arg1 pdfBox:(int)arg2 destRect:(CGRect)arg3 preserveAspectRatio:(BOOL)arg4 ;
-(CGPDFDocumentRef)documentForType:(int)arg1 ;
-(void)renderPage:(CGPDFPageRef)arg1 InRect:(CGRect)arg2 ;
@end

