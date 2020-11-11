/*
                       * This header is generated by classdump-dyld 1.5
                       * on Wednesday, November 11, 2020 at 12:35:21 PM Eastern Standard Time
                       * Operating System: Version 14.2 (Build 18B92)
                       * Image Source: /System/Library/Frameworks/Contacts.framework/Contacts
                       * classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos. Updated by Kevin Bradley.
                       */

#import <Contacts/CNFetchRequest.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSData, NSArray, NSString;

@interface CNChangeHistoryFetchRequest : CNFetchRequest <NSSecureCoding> {

	BOOL _shouldUnifyResults;
	BOOL _mutableObjects;
	BOOL _includeGroupChanges;
	BOOL _enforceClientIdentifier;
	BOOL _includeChangeAnchors;
	BOOL _includeChangeIDs;
	BOOL _includeExternalIDs;
	BOOL _includeImagesChanged;
	BOOL _includeLabeledValueChanges;
	NSData* _startingToken;
	NSArray* _additionalContactKeyDescriptors;
	NSArray* _excludedTransactionAuthors;
	NSString* _clientIdentifier;
	NSString* _containerIdentifier;

}

@property (nonatomic,readonly) NSString * clientIdentifier;                        //@synthesize clientIdentifier=_clientIdentifier - In the implementation block
@property (assign,nonatomic) BOOL includeChangeAnchors;                            //@synthesize includeChangeAnchors=_includeChangeAnchors - In the implementation block
@property (assign,nonatomic) BOOL includeChangeIDs;                                //@synthesize includeChangeIDs=_includeChangeIDs - In the implementation block
@property (assign,nonatomic) BOOL includeExternalIDs;                              //@synthesize includeExternalIDs=_includeExternalIDs - In the implementation block
@property (assign,nonatomic) BOOL includeImagesChanged;                            //@synthesize includeImagesChanged=_includeImagesChanged - In the implementation block
@property (assign,nonatomic) BOOL includeLabeledValueChanges;                      //@synthesize includeLabeledValueChanges=_includeLabeledValueChanges - In the implementation block
@property (nonatomic,retain) NSString * containerIdentifier;                       //@synthesize containerIdentifier=_containerIdentifier - In the implementation block
@property (assign,nonatomic) BOOL unifyResults; 
@property (nonatomic,copy) NSData * startingToken;                                 //@synthesize startingToken=_startingToken - In the implementation block
@property (nonatomic,copy) NSArray * additionalContactKeyDescriptors;              //@synthesize additionalContactKeyDescriptors=_additionalContactKeyDescriptors - In the implementation block
@property (assign,nonatomic) BOOL shouldUnifyResults;                              //@synthesize shouldUnifyResults=_shouldUnifyResults - In the implementation block
@property (assign,nonatomic) BOOL mutableObjects;                                  //@synthesize mutableObjects=_mutableObjects - In the implementation block
@property (assign,nonatomic) BOOL includeGroupChanges;                             //@synthesize includeGroupChanges=_includeGroupChanges - In the implementation block
@property (nonatomic,copy) NSArray * excludedTransactionAuthors;                   //@synthesize excludedTransactionAuthors=_excludedTransactionAuthors - In the implementation block
+(BOOL)supportsSecureCoding;
-(id)initWithClientIdentifier:(id)arg1 ;
-(void)setIncludeChangeAnchors:(BOOL)arg1 ;
-(void)setIncludeLabeledValueChanges:(BOOL)arg1 ;
-(NSArray *)excludedTransactionAuthors;
-(void)acceptVisitor:(id)arg1 ;
-(NSString *)clientIdentifier;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)includeLabeledValueChanges;
-(void)setExcludedTransactionAuthors:(NSArray *)arg1 ;
-(BOOL)includeImagesChanged;
-(BOOL)includeExternalIDs;
-(BOOL)includeChangeAnchors;
-(NSString *)containerIdentifier;
-(BOOL)mutableObjects;
-(id)description;
-(void)setStartingAnchor:(id)arg1 ;
-(void)setContainerIdentifier:(NSString *)arg1 ;
-(NSData *)startingToken;
-(NSArray *)additionalContactKeyDescriptors;
-(void)setMutableObjects:(BOOL)arg1 ;
-(void)setIncludeChangeIDs:(BOOL)arg1 ;
-(BOOL)unifyResults;
-(id)initWithCoder:(id)arg1 ;
-(void)setShouldUnifyResults:(BOOL)arg1 ;
-(void)setIncludeImagesChanged:(BOOL)arg1 ;
-(void)setAdditionalContactKeyDescriptors:(NSArray *)arg1 ;
-(void)setIncludeExternalIDs:(BOOL)arg1 ;
-(void)setUnifyResults:(BOOL)arg1 ;
-(BOOL)shouldUnifyResults;
-(BOOL)includeChangeIDs;
-(void)setStartingToken:(NSData *)arg1 ;
-(void)setIncludeGroupChanges:(BOOL)arg1 ;
-(BOOL)includeGroupChanges;
@end
