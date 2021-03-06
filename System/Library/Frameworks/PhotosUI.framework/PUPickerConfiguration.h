/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:37:42 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/PhotosUI.framework/PhotosUI
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <PhotosUI/PhotosUI-Structs.h>
#import <libobjc.A.dylib/NSSecureCoding.h>
#import <libobjc.A.dylib/NSItemProviderWriting.h>
#import <libobjc.A.dylib/NSItemProviderReading.h>

@protocol PUPickerFilter;
@class NSArray, NSURL, NSString;

@interface PUPickerConfiguration : NSObject <NSSecureCoding, NSItemProviderWriting, NSItemProviderReading> {

	BOOL _useMessagesLayout;
	BOOL _showsFileSizePicker;
	BOOL _requiresPickingConfirmation;
	long long _preferredAssetRepresentationMode;
	long long _selectionLimit;
	id<PUPickerFilter> _filter;
	NSURL* _photoLibraryURL;
	unsigned long long _resultOptions;
	NSString* _limitedLibraryClientIdentifier;
	SCD_Struct_PU14 _limitedLibraryClientAuditToken;

}

@property (nonatomic,readonly) long long preferredAssetRepresentationMode;                         //@synthesize preferredAssetRepresentationMode=_preferredAssetRepresentationMode - In the implementation block
@property (nonatomic,readonly) long long selectionLimit;                                           //@synthesize selectionLimit=_selectionLimit - In the implementation block
@property (nonatomic,copy,readonly) id<PUPickerFilter> filter;                                     //@synthesize filter=_filter - In the implementation block
@property (nonatomic,copy,readonly) NSURL * photoLibraryURL;                                       //@synthesize photoLibraryURL=_photoLibraryURL - In the implementation block
@property (nonatomic,readonly) unsigned long long resultOptions;                                   //@synthesize resultOptions=_resultOptions - In the implementation block
@property (nonatomic,readonly) BOOL isValidConfiguration; 
@property (nonatomic,readonly) BOOL allowsMultipleSelection; 
@property (nonatomic,readonly) BOOL allowsUnlimitedMultipleSelection; 
@property (nonatomic,readonly) BOOL allowsAssetData; 
@property (nonatomic,readonly) BOOL allowsAssetIdentifiers; 
@property (nonatomic,readonly) BOOL shouldRequestCurrentIfPossible; 
@property (assign,nonatomic) BOOL useMessagesLayout;                                               //@synthesize useMessagesLayout=_useMessagesLayout - In the implementation block
@property (assign,nonatomic) BOOL showsFileSizePicker;                                             //@synthesize showsFileSizePicker=_showsFileSizePicker - In the implementation block
@property (assign,nonatomic) BOOL requiresPickingConfirmation;                                     //@synthesize requiresPickingConfirmation=_requiresPickingConfirmation - In the implementation block
@property (nonatomic,copy) NSString * limitedLibraryClientIdentifier;                              //@synthesize limitedLibraryClientIdentifier=_limitedLibraryClientIdentifier - In the implementation block
@property (assign,nonatomic) SCD_Struct_PU14 limitedLibraryClientAuditToken;                       //@synthesize limitedLibraryClientAuditToken=_limitedLibraryClientAuditToken - In the implementation block
@property (nonatomic,copy,readonly) NSArray * writableTypeIdentifiersForItemProvider; 
@property (readonly) unsigned long long hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)objectWithItemProviderData:(id)arg1 typeIdentifier:(id)arg2 error:(id*)arg3 ;
+(BOOL)supportsSecureCoding;
+(id)writableTypeIdentifiersForItemProvider;
+(id)readableTypeIdentifiersForItemProvider;
-(id)loadDataWithTypeIdentifier:(id)arg1 forItemProviderCompletionHandler:(/*^block*/id)arg2 ;
-(id<PUPickerFilter>)filter;
-(id)init;
-(void)encodeWithCoder:(id)arg1 ;
-(NSURL *)photoLibraryURL;
-(long long)selectionLimit;
-(id)initWithPHPickerConfiguration:(id)arg1 ;
-(BOOL)allowsUnlimitedMultipleSelection;
-(long long)preferredAssetRepresentationMode;
-(unsigned long long)resultOptions;
-(BOOL)useMessagesLayout;
-(void)setUseMessagesLayout:(BOOL)arg1 ;
-(BOOL)showsFileSizePicker;
-(void)setShowsFileSizePicker:(BOOL)arg1 ;
-(BOOL)requiresPickingConfirmation;
-(void)setRequiresPickingConfirmation:(BOOL)arg1 ;
-(NSString *)limitedLibraryClientIdentifier;
-(void)setLimitedLibraryClientIdentifier:(NSString *)arg1 ;
-(SCD_Struct_PU14)limitedLibraryClientAuditToken;
-(void)setLimitedLibraryClientAuditToken:(SCD_Struct_PU14)arg1 ;
-(BOOL)allowsMultipleSelection;
-(id)initWithCoder:(id)arg1 ;
-(BOOL)shouldRequestCurrentIfPossible;
-(BOOL)allowsAssetIdentifiers;
-(BOOL)allowsAssetData;
-(BOOL)isValidConfiguration;
@end

