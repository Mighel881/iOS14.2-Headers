/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:03 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/PrivateFrameworks/WebCore.framework/WebCore
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */


#import <WebCore/WebCore-Structs.h>
@class NSArray, NSItemProvider;

@interface WebItemProviderLoadResult : NSObject {

	RetainPtr<NSMutableDictionary<NSString *,NSURL *> >* _fileURLs;
	RetainPtr<NSItemProvider>* _itemProvider;
	RetainPtr<NSArray<NSString *> >* _typesToLoad;

}

@property (nonatomic,readonly) NSArray * loadedFileURLs; 
@property (nonatomic,readonly) NSArray * loadedTypeIdentifiers; 
@property (nonatomic,readonly) BOOL canBeRepresentedAsFileUpload; 
@property (nonatomic,readonly) NSItemProvider * itemProvider; 
@property (nonatomic,readonly) NSArray * typesToLoad; 
+(id)loadResultWithItemProvider:(id)arg1 typesToLoad:(id)arg2 ;
-(NSItemProvider *)itemProvider;
-(NSArray *)typesToLoad;
-(id)initWithItemProvider:(id)arg1 typesToLoad:(id)arg2 ;
-(BOOL)canBeRepresentedAsFileUpload;
-(id)fileURLForType:(id)arg1 ;
-(void)setFileURL:(id)arg1 forType:(id)arg2 ;
-(NSArray *)loadedFileURLs;
-(NSArray *)loadedTypeIdentifiers;
-(id)description;
@end
